#include "population.hpp"

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

    return 0;
}
