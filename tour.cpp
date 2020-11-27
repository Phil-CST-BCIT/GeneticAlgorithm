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

/**
 * default constructor
 * instantiates a Tour with 32 unique cities.
 */
Tour::Tour() :fitness_rating(0) {
    city_list.reserve(CITIES_IN_TOUR);
}

