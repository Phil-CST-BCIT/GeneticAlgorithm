#include "population.hpp"
#include <iostream>
using namespace std;

/**
 * the entry point where the compiler gets called
 * @return 0 if the program executes correctly
 */
int main() {
    Population tester {};

    tester.create_cities();

    tester.init_fitness();

    tester.genetic_process();

    cout << "================================================================== " << endl;
    cout << "The improvement of the travelling tour distance has been achieved. " << endl;
    cout << "The final tour is: " << *(tester.get_population().at(0)) << endl;

    return 0;
}
