//
// Created by Phil Teng on 2020-11-27.
//
#include <iostream>
#include <random>
#include "population.hpp"
#include "master_list.hpp"
using namespace std;

/**
 * default constructor for Population class
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
 * finds the index of the shortest tour in a population
 * @return the index to the tour in vector<shared_ptr<Tour>> population
 */
int Population::find_shortest() {
    int shortest {};

    shared_ptr<Tour> rhs = this->get_population().at(0);

    for(int i = 0; i < POPULATION_SIZE; ++i) {
        if(*(this->get_population().at(i)) < *rhs){
            shortest = i;
            rhs = this->get_population().at(i);
        }
    }

    return shortest;
}

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

void Population::genetic_process() {

    int shortest {find_shortest()};
    cout << "shortest = " << shortest << endl;
    int i {};
    while( i < 32) {
       if(move_elite(shortest))
           cout << "shortest = " << shortest << endl;
        ++i;
        shortest = find_shortest();
    }
}