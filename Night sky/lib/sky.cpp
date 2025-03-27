#include <iostream>
#include "sky.hpp"
#include "raylib.h"

void add_star(const Star& star);
        void print();

 void Sky::add_star(const Star& star){
    for(Star& s : stars){
        if(s.get_x() == star.get_x() && s.get_y() == star.get_y()){
            std::cout << "This star already exists." << std::endl;
            return;
        }
    }
    stars.push_back(star);
    //std::cout << "Star was added successfully." << std::endl;
}
        
void Sky::print(){
    if(stars.empty()){
        std::cout << "There are no stars to display." << std::endl;
        return;
    }
    const int width = 150;
    const int height = 30;
        
    char sky[height][width];
    for(int i = 0; i < height; ++i){
        for(int j = 0; j < width; ++j){
            sky[i][j] = ' ';
        }
    }

    for(Star& s : stars){
        int x = s.get_x();
        int y = s.get_y();
        sky[y][x] = '*';
    }

    for(int i = 0; i < height; ++i){
        for(int j = 0; j < width; ++j) {
            std::cout << sky[i][j];
        }
        std::cout << std::endl;
    }
}

// void Sky::render(){ 
//    const int screenWidth = 800; 
//    const int screenHeight = 600; 
 
//    InitWindow(screenWidth, screenHeight, "Star Chart"); 
 
//    SetTargetFPS(60); 
 
//    while(!WindowShouldClose()){ 
//        BeginDrawing(); 
 
//        ClearBackground(BLACK); 
 
//        for(const auto &star : stars){ 
//            DrawCircle(star.get_x(), star.get_y(), star.get_brightness(), WHITE); 
//        } 
 
//        EndDrawing(); 
//    } 
 
//    CloseWindow(); 
// }