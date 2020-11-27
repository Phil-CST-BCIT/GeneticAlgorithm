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
 * @param city_list: a vector of shared pointer to city stores cities that have been visited
 * @param fitness_rating: the sum of distance between an origin and a destination city
 */
class Tour{

    friend ostream& operator<<(ostream&, const Tour&);


private:

    vector<shared_ptr<City>> city_list;

    double fitness_rating;

public:
    const int CITIES_IN_TOUR = 32;

    Tour();

    double get_rating() const { return fitness_rating; }

    vector<shared_ptr<City>> get_list() const { return city_list; }

    bool add_city(const shared_ptr<City> city);


//    friend double get_distance_between_cities(const shared_ptr<City>&, const shared_ptr<City>&);

    double get_tour_distance();
};

#endif //GENETICALGORITHM_TOUR_HPP
