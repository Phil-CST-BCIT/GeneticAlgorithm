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
    for(auto &city_ptr : rhs.city_list)
        os << *city_ptr << endl;

    os << "Fitness rating of the tour: " << rhs.get_rating() << endl;

    return os;
}

///**
// * a helper method that gets the distance between two cities.
// * @param c1: city
// * @param c2: city
// * @return: distance
// */
//double get_distance_between_cities(const shared_ptr<City> &c1, const shared_ptr<City> &c2) {
//    return *c1 + *c2;
//}

/**
 * default constructor
 * instantiates a Tour with 32 unique cities.
 */
Tour::Tour() :fitness_rating(0) {
    city_list.reserve(CITIES_IN_TOUR);
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

    for(auto &c : this->city_list){
        if(*c == *city) {
            return false;
        }
    }

    this->city_list.push_back(city);

    if(this->get_list().size() - size == 1)
        return true;
    else
        return false;
}

double Tour::get_tour_distance() {
    if(this->get_list().empty())
        return 0;

    for(int i = 0; i < this->get_list().size() && i + 1 < this->get_list().size(); ++i){
        this->fitness_rating += *(this->city_list.at(i)) + *(this->city_list.at(i+1));
    }

    cout << fitness_rating << endl;
    return this->fitness_rating;
}

