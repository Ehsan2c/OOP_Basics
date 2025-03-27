#include <iostream>
#include <stdexcept>
#include "character.hpp"

Character::Character(const std::string& name2 , int health2 , int power2) : name(name2) , health(health2) , power(power2) {
    if (health < 0) {
        throw std::out_of_range("Health can not be negative.");
    }
    if (power < 0) {
        throw std::out_of_range("Power can not be negative.");
    }
}

std::string Character::get_name() const{
    return name;
}

int Character::get_health() const{
    return health;
}

int Character::get_power() const{
    return power;
}

void Character::set_name(const std::string& name2){
    name = name2;
}

void Character::set_health(int health2){
    if(health2 < 0){
        throw std::out_of_range("Health can not be negative.");
    }
    health = health2;
}

void Character::set_power(int power2){
    if(power2 < 0){
        throw std::out_of_range("Power can not be negative.");
    }
    power = power2;
}

void Character::add_skill(const std::string& name, int level){
    if(level < 0){
        throw std::out_of_range("Level can not be negative.");
    }
    skills.push_back(Skill(name, level));
}

void Character::print_skills(){
    if(skills.empty()){
        std::cout << name << " has no skills." << std::endl;
    } 
    else{
        std::cout << name << "'s skills:" << std::endl;
        for(const Skill& skill : skills){
            std::cout << "Skill name: " << skill.name << "\tSkill level: " << skill.level << std::endl;
        }
        std::cout << "-----------------------" << std::endl;
    }
}

void Character::print(){
    std::cout << "Name: " << name << std::endl;
    std::cout << "Health: " << health << std::endl;
    std::cout << "Power: " << power << std::endl;
    print_skills();
}