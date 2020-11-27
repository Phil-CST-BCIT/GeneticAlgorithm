//
// Created by Phil Teng on 2020-11-19.
//

#ifndef GENETICALGORITHM_TOUR_HPP
#define GENETICALGORITHM_TOUR_HPP
#include <vector>
#include <memory>
#include "city.hpp"
using namespace std;

/**
 * A Tour represents a number of cities a traveller has visited in a row
 *
 * @param city_list: a vector of City, stores cities has been visited
 * @param fitness_rating: the summation of distance between an origin and a destination city
 */
class Tour{
    friend ostream& operator<<(ostream&, const Tour&);
private:

    vector<unique_ptr<City>> city_list;

    double fitness_rating;

public:
    const int CITIES_IN_TOUR = 32;

    Tour();

    double get_rating() const { return fitness_rating; }

    vector<unique_ptr<City>> get_list() { return city_list; }

    bool add_city(unique_ptr<City> city);
};

#endif //GENETICALGORITHM_TOUR_HPP
