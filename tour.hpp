//
// Created by Phil Teng on 2020-11-19.
//

#ifndef GENETICALGORITHM_TOUR_HPP
#define GENETICALGORITHM_TOUR_HPP
#include <vector>
#include "city.hpp"
using namespace std;

/**
 * A Tour represents a number of cities a traveller has visited in a row
 *
 * @param city_list: a vector of City, stores cities has been visited
 * @param fitness_rating: the summation of distance between an origin and a destination city
 */
class Tour{
private:
    vector<City> city_list;
    double fitness_rating;
public:
    Tour();

    Tour(vector<City>&);

    double get_rating() const { return fitness_rating; }

    vector<City> get_list() { return city_list; }

//    void add_city(City);
    
};

#endif //GENETICALGORITHM_TOUR_HPP
