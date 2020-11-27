//
// Created by Phil Teng on 2020-11-19.
//

#ifndef GENETICALGORITHM_CITY_HPP
#define GENETICALGORITHM_CITY_HPP

#include <string>
using namespace std;

/**
 * the class City represents a city. By giving a pair of coordinates x and y,
 * we can know the location of a city on a 2-D map
 * @param name: the name of a city
 * @param x: latitude the x coordinate
 * @param y: longitude the y coordinate
 */
class City{

    friend ostream& operator<<(ostream&, const City&);

private:
    string name;
    double x;
    double y;

public:

    constexpr static double MAX_DISTANCE = 1000.0;

    City() :City("default", 0, 0) {}

    City(string, double, double);

    City(string);

    City(const City&);

    City& operator=(const City&);

    string get_name() const { return name; }

    double get_x() const { return x; }

    double get_y() const { return y; }

    void set_x(double x) {
        if(x < MAX_DISTANCE && x>= 0)
            this->x = x;
    }

    void set_y(double y) {
        if(y < MAX_DISTANCE && y > 0)
            this->y = y;
    }

    bool operator==(const City &rhs) const;
    bool operator!=(const City &rhs) const;
    double operator+(const City &rhs) const;

};


#endif //GENETICALGORITHM_CITY_HPP
