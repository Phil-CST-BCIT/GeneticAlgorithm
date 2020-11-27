//
// Created by Phil Teng on 2020-11-19.
//

#include "tour.hpp"
#include <vector>
#include <algorithm>
#include <math.h>

using namespace std;

Tour::Tour() {}

Tour::Tour(vector<City> &cities) : city_list(cities), fitness_rating(0) {
    auto first = cities.begin();
    auto second = cities.begin() + 1;

    while(second != cities.end()){
        double xy_dist = *first + *second;
        fitness_rating += xy_dist;
        ++first;
        ++second;
    }

    fitness_rating = 1 / fitness_rating;
}

//void Tour::add_city(City city) {
//   if((std::find(city_list.begin(), city_list.end(), city) != city_list.end()))
//       city_list.push_back(city);
//}