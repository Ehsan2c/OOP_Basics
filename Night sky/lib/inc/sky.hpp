#ifndef SKY_HPP
#define SKY_HPP

#include <vector>
#include "star.hpp"

class Sky{
    public:
        void add_star(const Star& star);
        void print();
        void render();

    private:
        std::vector<Star> stars;
};

#endif