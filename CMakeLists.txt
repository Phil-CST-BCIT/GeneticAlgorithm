cmake_minimum_required(VERSION 3.17)
project(GeneticAlgorithm)

set(CMAKE_CXX_STANDARD 14)

add_executable(GeneticAlgorithm main.cpp city.cpp city.hpp tour.cpp tour.hpp catch_amalgamated.cpp catch_amalgamated.hpp unit_test.cpp population.cpp population.hpp master_list.cpp master_list.hpp)