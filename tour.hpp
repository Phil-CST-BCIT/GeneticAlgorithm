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

    double distance;

    double fitness_rating;

public:
    static const int CITIES_IN_TOUR = 32;

    Tour();

    vector<shared_ptr<City>> get_list() const { return city_list; }

    double get_distance() const {return distance;}

    double get_rating() const { return fitness_rating; }

    void eval_distance() {
        this->distance = this->calc_tour_distance();
    }

    void eval_fitness() {
        this->fitness_rating = this->determine_fitness();
    }

    bool contains_city(shared_ptr<City>) const;

    bool add_city(const shared_ptr<City> city);

    double calc_tour_distance();

    double determine_fitness();

    bool operator<(const Tour&) const;
};

#endif //GENETICALGORITHM_TOUR_HPP
