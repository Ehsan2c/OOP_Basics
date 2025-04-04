#ifndef CITY_HPP
#define CITY_HPP

#include "theater.hpp"

class City{
    public:
        City();

        void displayTheater();

        int theaterSize();

        Theater& get_theater(int number);

    private:
        std::vector<Theater> theaters;
};

#endif