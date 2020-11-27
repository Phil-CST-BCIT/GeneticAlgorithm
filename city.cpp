//
// Created by Phil Teng on 2020-11-19.
//

#include <iostream>
#include <random>
#include <ctime>

#include "city.hpp"

using namespace std;

/**
 * overload insertion operator
 * @param os: output stream
 * @param rhs: an object reference to a city on the right hand side of the insertion operator
 * @return ostream os by reference
 */
ostream& operator<<(ostream &os, const City &rhs){

    os << "name = " << rhs.get_name() << "\nx = " << rhs.get_x() << "\n"
    << "y = " << rhs.get_y() << endl;

    return os;
}

/**
 * overload constructor City
 * @param name: the name of the city
 * @param x: the latitude of the city
 * @param y: the longitude of the city
 */
City::City(string name, double x, double y) :name(name) {

    try {
        if(x >= 0 && x <= City::MAX_DISTANCE){
            this->x = x;
        }
        else {
            throw invalid_argument("x cannot be less than 0");
        }

        if(y >= 0 && y <= City::MAX_DISTANCE){
            this->y = y;
        }
        else {
            throw invalid_argument("y cannot be less than 0");
        }
    } catch (exception& e) {
        this->name = "default";
        this->x = 0;
        this->y = 0;
    }
}

/**
 * overload constructor
 * constructs a city with randomly generated coordinates x and y
 * @param name
 */
City::City(string name) :name(name) {

    default_random_engine generator(time(nullptr));
    uniform_real_distribution<double> distribution(0, MAX_DISTANCE);

    this->x = distribution(generator);
    this->y = distribution(generator);
}

/**
 * copy constructor
 * @param source the city that is being copied from
 */
City::City(const City& source) :name(source.get_name()),
                                x(source.get_x()),
                                y(source.get_y()){}

/**
 * copy assignment operator
 * @param rhs: a reference to a city
 * @return: the calling city object by reference
 */
City& City::operator=(const City &rhs) {
    if(this == &rhs)
        return *this;

    this->name = rhs.get_name();
    this->x = rhs.get_x();
    this->y = rhs.get_y();

    return *this;
}

/**
 * overload equality operator
 * @param rhs: the city object on the right hand side
 * @return: true if two cities have the same x and y value
 */
bool City::operator==(const City &rhs) const {
    double tolerance {0.001};
    return  (this->get_x() - rhs.get_x() < tolerance) &&
            (this->get_y() - rhs.get_y() < tolerance);
}

/**
 * overload not-equal operator
 * @param rhs: the city object on the right hand side
 * @return: true if two cities are not equal
 */
bool City::operator!=(const City &rhs) const {
    return ! this->operator==(rhs);
}

/**
 * overload addition operator
 * @param rhs: the city object on the right hand side
 * @return: the distance between two cities
 */
double City::operator+(const City &rhs) const {
    double x_diff {pow((this->get_x() - rhs.get_x()), 2.0)};
    double y_diff {pow((this->get_y() - rhs.get_y()), 2.0)};
    return sqrt(x_diff + y_diff);
}