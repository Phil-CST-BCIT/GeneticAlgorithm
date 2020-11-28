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
        this->get_population().at(i)->set_distance();
        this->get_population().at(i)->set_fitness();
    }

}

