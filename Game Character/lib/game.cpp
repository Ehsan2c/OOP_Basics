#include <iostream>
#include "game.hpp"

void Game::add_character(const Character& newCharacter){
    for(Character& character : characters){
        if(character.get_name() == newCharacter.get_name()){
            std::cout << newCharacter.get_name() << " already exists." << std::endl;
            return;
        }
    }
    characters.push_back(newCharacter);
    std::cout << newCharacter.get_name() << " was added successfully." << std::endl;
}

void Game::print(){
    if(characters.empty()){
        std::cout << "There are no characters to display." << std::endl;
        return;
    }
    for(Character& character : characters){
        std::cout << "Name: " << character.get_name() << std::endl;
        std::cout << "Health: " << character.get_health() << std::endl;
        std::cout << "Power: " << character.get_power() << std::endl;
        character.print_skills();
    }
}