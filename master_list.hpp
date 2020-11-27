//
// Created by Phil Teng on 2020-11-27.
//
#ifndef GENETICALGORITHM_MASTER_LIST_HPP
#define GENETICALGORITHM_MASTER_LIST_HPP

#include <vector>
#include "city.hpp"

using namespace std;

/**
 * a singleton class for generating the master list of cities
 */
class MasterList{

public:
    static MasterList& get_instance() {
        static MasterList instance;
        return instance;
    }

private:
    vector<City> master_list;
    MasterList();

public:
    MasterList(MasterList const &) = delete;
    void operator=(MasterList const &) = delete;
    vector<City>& get_value()  {return master_list;}
};
#endif //GENETICALGORITHM_MASTER_LIST_HPP
