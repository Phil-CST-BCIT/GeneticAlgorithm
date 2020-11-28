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

    static const int ITERATIONS = 32;

    Population();

    vector<shared_ptr<Tour>> get_population() const {return population;}

    void create_cities();

    void init_fitness();

    int find_shortest();

    bool move_elite(int);

    void genetic_process();



};
#endif //GENETICALGORITHM_POPULATION_HPP
