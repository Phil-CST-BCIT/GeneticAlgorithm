//
// Created by Phil Teng on 2020-11-19.
//

#include "tour.hpp"
#include <iostream>
#include <vector>
#include <memory>
#include <algorithm>
#include <math.h>

using namespace std;

/**
 * overload insertion operator for displaying details about a tour
 * @param os: output stream
 * @param rhs: a tour object by reference
 * @return os
 */
ostream& operator<<(ostream& os, const Tour& rhs){
//    for(auto &city_ptr : rhs.city_list)
//        os << *city_ptr << endl;

    os << "Distance of the tour: " << rhs.get_distance() << "\n"
    << "Fitness rating of the tour: " << rhs.get_rating() << endl;

    return os;
}

/**
 * default constructor
 * instantiates a Tour with 32 unique cities.
 */
Tour::Tour() : distance(0), fitness_rating(0) {
    city_list.reserve(CITIES_IN_TOUR);
}

/**
 * checks if city already exists in the city_list
 * @param city: a pointer to a city
 * @return true if the city already exists
 */
bool Tour::contains_city(shared_ptr<City> city) const {
    for(auto &c : this->city_list){
        if(*c == *city)
            return true;
    }

    return false;
}

/**
 * add a city to city_list
 * @param city: a unique pointer to city
 * @return true if successfully add the city
 */
bool Tour::add_city(const shared_ptr<City> city) {

    if(city == nullptr)
        return false;

    int size = this->get_list().size();

    if(this->contains_city(city))
        return false;

    this->city_list.push_back(city);

    if(this->get_list().size() - size == 1)
        return true;
    else
        return false;
}

/**
 * calculates the distance between cities as they are listed in a tour
 * @return the sum of distances
 */
double Tour::calc_tour_distance() {
    if(this->get_list().empty())
        return 0;

    double d {};
    for(int i = 0; i < this->get_list().size() && i + 1 < this->get_list().size(); ++i){
        d += *(this->city_list.at(i)) + *(this->city_list.at(i+1));
    }

    return d;
}

/**
 * calculates the fitness of a tour
 * @return: the fitness rating of the calling Tour object
 */
double Tour::determine_fitness() {

    const double scalar = 37;
    double fitness {};
    if(distance != 0)
        fitness = distance / scalar;

    return fitness;
}

/**
 * overload less than operator
 * @param rhs
 * @return true if the tour rating of the calling Tour is less than the tour rating of the rhs
 */
bool Tour::operator<(const Tour &rhs) const {
    if(this->get_distance() == 0 && rhs.get_distance() == 0)
        return false;

    if(this->get_rating() < rhs.get_rating())
        return true;
    else
        return false;
}

