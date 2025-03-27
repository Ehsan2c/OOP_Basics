#ifndef GAME_HPP
#define GAME_HPP

#include <vector>
#include "character.hpp"

class Game{
    public:
        void add_character(const Character& character);
        void print();

    private:
    std::vector<Character> characters;
};

#endif