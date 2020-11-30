//
// Created by Phil Teng on 2020-11-27.
//
#include <iostream>
#include <random>
#include "population.hpp"
#include "master_list.hpp"
using namespace std;

/**
 * default constructor of Population class
 * On each instantiation, the constructor reserves 32 memory units for the underlying vector field
 * population.
 */
Population::Population() {
    population.reserve(POPULATION_SIZE);
}

/**
 * creates different ordering of cities for each tour in a population.
 *
 * In the outer for loop, it instantiates 32 shared pointers to Tour, and then
 * the constructor uses random generator and std::shuffle algorithm to shuffle
 * the master list in order to change the ordering of cities in the master list.
 *
 * In the inner for loop, the constructor instantiates
 * 32 City pointers and adds the pointers to a tour.
 */
void Population::create_cities() {

    for(int i = 0; i < POPULATION_SIZE; ++i) {

        shared_ptr<Tour> t = make_shared<Tour>();

        std::random_device rd;
        std::mt19937 gen(rd());
        auto itr_begin = MasterList::get_instance().get_value().begin();
        auto itr_end = MasterList::get_instance().get_value().end();

        shuffle(itr_begin, itr_end, gen);

        for(int j = 0; j < Tour::CITIES_IN_TOUR; ++j) {
            shared_ptr<City> c = make_shared<City>(MasterList::get_instance().get_value().at(j));
            t->add_city(c);
        }

        population.push_back(t);
    }
}

/**
 * sets the initial fitness for each tour in the population.
 */
void Population::init_fitness() {

    for(int i = 0; i < POPULATION_SIZE; ++i){
        this->get_population().at(i)->eval_distance();
        this->get_population().at(i)->eval_fitness();
    }
}

/**
 * a friend function
 * finds the index of the shortest tour in a population
 * @return the index to the tour in vector<shared_ptr<Tour>> p
 */
int find_shortest(vector<shared_ptr<Tour>> p) {
    int shortest {};

    shared_ptr<Tour> rhs = p.at(0);

    for(int i = 0; i < p.size(); ++i) {
        if(*(p.at(i)) < *rhs){
            shortest = i;
            rhs = p.at(i);
        }
    }

    return shortest;
}
/**
 * swap the elite tour with the first tour in the vector
 * @param index: the index where the elite tour is located at the vector
 * @return true if successfully swapped the elite with the first tour
 */
bool Population::move_elite(int index) {

    if(index > POPULATION_SIZE - 1)
        return false;

    double elite_fitness {this->get_population().at(index)->get_rating()};

    shared_ptr<Tour> elite = this->get_population().at(index);

    std::swap(this->population.at(0), this->population.at(index));

    if((elite_fitness - this->get_population().at(0)->get_rating()) < 0.001) {
        return true;
    } else
        return false;
}

vector<shared_ptr<Tour>> Population::pick_tours()  {
    vector<shared_ptr<Tour>> random_tours {};
    random_tours.reserve(PARENT_POOL_SIZE);

    for(int i = 0; i < PARENT_POOL_SIZE; ++i) {
        int index = rand() % (POPULATION_SIZE - 1) + 1;
        shared_ptr<Tour> t = this->get_population().at(index);
        random_tours.push_back(t);
    }
    return random_tours;
}

/**
 * creates a new tour child from a pair of elite tours
 * @return child: shared pointer to a tour
 */
shared_ptr<Tour> Population::crossover() {

    vector<shared_ptr<Tour>> v1 = pick_tours();
    vector<shared_ptr<Tour>> v2 = pick_tours();

    int s1 = find_shortest(v1);
    int s2 = find_shortest(v2);

    shared_ptr<Tour> p1 = v1.at(s1);
    shared_ptr<Tour> p2 = v2.at(s2);

    int random_index = rand() % POPULATION_SIZE;

    shared_ptr<Tour> child = make_shared<Tour>();

    for(int j = 0; j < random_index + 1 && random_index + 1 < POPULATION_SIZE; ++j) {
        child->add_city(p1->get_list().at(j));
    }

    int child_size = child->get_list().size();

    for(int i = 0; i < Tour::CITIES_IN_TOUR && child_size != Tour::CITIES_IN_TOUR; ++i) {
        shared_ptr<City> c = p2->get_list().at(i);
        if(!child->contains_city(c)) {
            child->add_city(c);
        }
        child_size = child->get_list().size();
    }

    return child;
}

/**
 * a helper method performs the crossover method
 * @param shortest: the index to the shortest tour in current population
 */
void Population::cross(int shortest) {

    vector<shared_ptr<Tour>> next_generations {};

    next_generations.reserve(POPULATION_SIZE );

    next_generations.push_back(this->population.at(shortest));

    for(int k = 0; k < POPULATION_SIZE - 1; ++k) {
        shared_ptr<Tour> child = crossover();
        child->eval_distance();
        child->eval_fitness();
        next_generations.push_back(child);
    }

    swap(this->population, next_generations);
}


/**
 * performs the genetic algorithm
 *
 * On start, the method finds the index of the initial shortest tour and stores the index of the
 * shortest tour to int variable 'shortest'.
 *
 * After that, it moves the shortest tour to the front of the population vector.
 * The method then performs the while loop in order to generate even shorter child tour.
 *
 * When counter i reaches POPULATION_SIZE or predefined threshold, it terminates the
 * while loop and reports the final result.
 *
 */
void Population::genetic_process() {

    int shortest {find_shortest(this->get_population())};

    int i {};

    if(move_elite(shortest))
        cout << "init shortest = " << shortest << endl;

    while( i < POPULATION_SIZE) {

        cross(shortest);

        shortest = find_shortest(this->get_population());

        move_elite(shortest);

        ++i;

        cout << "Generation" << i << "shortest = " << shortest << endl;
    }
}