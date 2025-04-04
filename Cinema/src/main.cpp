#include "city.hpp"
#include <iostream>
#include <sstream>

int main(){
    City city;
    Theater theater;

    int theaterSelect , movieSelect , row , col;
    while(true){
        city.displayTheater();

        std::cin >> theaterSelect;
        if(theaterSelect == city.theaterSize() + 1){
            std::cout << "Have a good time." << std::endl;
            break;
        }
        if(theaterSelect > city.theaterSize() + 1){
            std::cout << "Please choose one of the available options." << std::endl;
            continue;
        }

        while(true){
            city.get_theater(theaterSelect - 1).displayMovies();

            std::cin >>  movieSelect;
            if(movieSelect == theater.movieSize() + 1){
                break;
            }
            if(movieSelect > theater.movieSize() + 1){
                std::cout << "Please choose one of the available options." << std::endl;
                continue;
            }

            std::cin.ignore();
            while(true){
                std::cout << "Seat Map for Movie " << movieSelect << ":" << std::endl;
                
                if(city.get_theater(theaterSelect - 1).isFull(movieSelect - 1)){
                    std::cout << "This theater is full." << std::endl;
                    city.get_theater(theaterSelect - 1).displaySeats(movieSelect - 1);
                    std::cout << std::endl;
                    break;
                }

                city.get_theater(theaterSelect - 1).displaySeats(movieSelect - 1);

                std::string seatSelect = "";
                
                getline(std::cin , seatSelect);
                if(seatSelect == "back"){
                    break;
                }
                
                std::istringstream iss(seatSelect);
                if(!(iss >> row >> col) || !(iss.eof())){ 
                    std::cout << "Invalid input format. Please enter row and column separated by a space." << std::endl;
                    continue;
                }
                
                if(!city.get_theater(theaterSelect - 1).validateSeat(row , col)){
                    std::cout << "Invalid seat position. Enter a row and column within range." << std::endl;
                    continue; 
                }

                if(!city.get_theater(theaterSelect - 1).reserveSeat(movieSelect - 1 , row -1 , col - 1)){
                    std::cout << "This seat is already reserved. Please select another seat." << std::endl;
                    continue;
                }
            }
        }
    }
    return 0;
}