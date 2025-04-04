#include "city.hpp"
#include <iostream>

City::City(){
    theaters.push_back(Theater("Theater 1" , 3 , 2));
    theaters.push_back(Theater("Theater 2" , 4 , 2));
    theaters.push_back(Theater("Theater 3" , 2 , 2));
}

void City::displayTheater(){
    std::cout << "Welcome to the Cinema Seat Reservation System!" << std::endl;
    int i = 1;
    for(Theater& t : theaters){
        std::cout << i << ". " << t.get_name() << std::endl;  
        i++;
    }
    std::cout << i << ". Exit" << std::endl; 
    std::cout << "Please select a theater (or exit): ";
}

int City::theaterSize(){
    return theaters.size();
}

Theater& City::get_theater(int number){
    return theaters.at(number);
}