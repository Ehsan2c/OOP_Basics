#include <iostream>
#include "star.hpp"

Star::Star(int x2 , int y2 , int brightness2) : x(x2) , y(y2) , brightness(brightness2) {
    if (x < 0 || x >= 800 || y < 0 || y >= 600) {
        std::cout << "Star coordinates are out of range.";
    }
    if(x < 0 || x >= 800){
        std::cout << "x should be between 0 and 800." << std::endl;
    }
    if(y < 0 || y >= 600){
        std::cout << "y should be between 0 and 600." << std::endl;
    }
    
}

int Star::get_x() const{
    return x;
}

int Star::get_y() const{
    return y;
}

int Star::get_brightness() const{
    return brightness;
}

void Star::set_y(int x2){
    if(x2 >= 0 && x2 <800){
        x = x2;
    }
    else{
        std::cout << "x should be between 0 and 800." << std::endl;
    }
}

void Star::set_brightness(int y2){
    if(y2 >= 0 && y2 <600){
        y = y2;
    }
    else{
        std::cout << "y should be between 0 and 600." << std::endl;
    }
}

void Star::set_x(int brightness2){
    brightness = brightness2;
}

