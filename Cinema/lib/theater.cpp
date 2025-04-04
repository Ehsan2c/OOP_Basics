#include "theater.hpp"
#include <iostream>

Theater::Theater() {}

Theater::Theater(std::string name2 , int rows2 , int cols2) : name(name2) , rows(rows2) , cols(cols2) {
    seats = std::vector<std::vector<std::vector<std::string>>>(movies.size() , std::vector<std::vector<std::string>>(rows , std::vector<std::string>(cols , "[ ]")));
}

std::string Theater::get_name() const{
    return name;
}

void Theater::displayMovies(){
    std::cout << "Movies list: " << std::endl;
    int i = 1;
    for(auto& movie : movies){
        std::cout << i << ". " << movie << std::endl;
        i++;
    }
    std::cout << i << ". back" << std::endl; 
    std::cout << "Please select a movie (or go back): ";
}

void Theater::displaySeats(int movieNumber){
    for(auto& seat : seats[movieNumber]){
        for(auto& s : seat){
            std::cout << s << " ";
        }
        std::cout << std::endl;
    }
    std::cout << "Please select a seat or type 'back' to return: ";
}

int Theater::movieSize(){
    return movies.size();
}

bool Theater::reserveSeat(int movieNumber , int row , int col){
    if(seats.at(movieNumber).at(row).at(col) == "[ ]"){
        seats.at(movieNumber).at(row).at(col) = "[x]";
        std::cout << "Seat reserved successfully." << std::endl;
        return true;
    }
    return false;
}

bool Theater::validateSeat(int row , int col){
    if(row > 0 && row <= rows && col > 0 && col <= cols){
        return true;
    } 
    return false;
}

bool Theater::isFull(int movieNumber){
    for(size_t i = 0; i < rows; ++i){
        for(size_t j = 0; j < cols; ++j){
            if(seats.at(movieNumber).at(i).at(j) == "[ ]"){
                return false;
            }
        }
    }
    return true;
}