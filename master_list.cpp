//
// Created by Phil Teng on 2020-11-27.
//
#include "tour.hpp"
#include "master_list.hpp"
#include <string>

using namespace std;

MasterList::MasterList() {

    master_list.reserve(Tour::CITIES_IN_TOUR);

    for(int i = 0; i < Tour::CITIES_IN_TOUR; ++i) {
        string name = "C_" + to_string(i);
        const City c {name};

//        auto itr_begin = master_list.begin();
//        auto itr_end = master_list.end();
//
//        while(*std::find(itr_begin, itr_end, c) == c) {
//            City d {name};
//            c = d;
//        }

        master_list.push_back(c);
    }
}