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
 *
 * On each instantiation, the constructor reserves 32 memory units for the underlying vector field
 * population. In the outer for loop, it instantiates 32 shared pointers to Tour, and then
 * the constructor uses random generator and std::shuffle algorithm to shuffle
 * the master list in order to change the ordering of cities in the master list.
 *
 * In the inner for loop, the constructor instantiates
 * 32 City pointers and adds the pointers to a tour.
 */
Population::Population() {

    population.reserve(POPULATION_SIZE);

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

        t->set_distance();
        t->set_fitness();

//        cout << *t << endl;

        population.push_back(t);
    }

}