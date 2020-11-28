//
// Created by Phil Teng on 2020-11-27.
//

#ifndef GENETICALGORITHM_POPULATION_HPP
#define GENETICALGORITHM_POPULATION_HPP

#include <vector>
#include <memory>
#include <algorithm>
#include "tour.hpp"

using namespace std;

class Population{

private:
    vector<shared_ptr<Tour>> population;

public:
    static const int POPULATION_SIZE = 32;

    Population();

    vector<shared_ptr<Tour>> get_population() const {return population;}

};
#endif //GENETICALGORITHM_POPULATION_HPP
