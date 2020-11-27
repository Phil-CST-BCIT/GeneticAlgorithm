//
// Created by Phil Teng on 2020-11-27.
//
#include "tour.hpp"
#include "master_list.hpp"
#include <string>

using namespace std;

MasterList::MasterList() {

    master_list.reserve(2 * Tour::CITIES_IN_TOUR);

    for(int i = 0; i < 2 * Tour::CITIES_IN_TOUR; ++i) {
        string name = "CityID" + to_string(i);
        const City c {name};
        master_list.push_back(c);
    }
}