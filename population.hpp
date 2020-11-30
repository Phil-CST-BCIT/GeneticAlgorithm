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

    friend int find_shortest(vector<shared_ptr<Tour>>);

    friend bool roll_dice();


private:
    vector<shared_ptr<Tour>> population;

public:
    static const int POPULATION_SIZE = 32;

    static const int ITERATIONS = 32;

    static const int PARENT_POOL_SIZE = 3;

    static const int MUTATION_RATE = 15;

    static const int DICE_RANGE = 100;


    Population();

    vector<shared_ptr<Tour>> get_population() const {return population;}

    void create_cities();

    void init_fitness();


    bool move_elite(int);

    vector<shared_ptr<Tour>> pick_tours();

    shared_ptr<Tour> crossover();

    void cross(int);


//    void mutate();

    void genetic_process();



};
#endif //GENETICALGORITHM_POPULATION_HPP
