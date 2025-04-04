#include "TicTacToe.hpp"
#include <iostream>

Game::Game() : positions(3 , std::vector<char>(3,' ')) {}

bool Game::addMove(int row , int col , char playerSign2){
    if(positions.at(row).at(col) != ' '){
        std::cout << "This spot is full. Try again." << std::endl;
        return false;
    }
    positions.at(row).at(col) = playerSign2;
    return true;
}

void Game::display(){
    for(size_t i = 0; i < 3; i++){
        int k = 0;
        for(size_t j = 0; j < 3; j++){
            std::cout << positions.at(i).at(j);
            if(k < 2){
                std::cout << "|";
                k++;
            }
        }
        std::cout << std::endl;
    }
}

bool Game::validateMove(int row , int col){
    if(row > 0 && row <= 3 && col > 0 && col <= 3){
        return true;
    }
    else{
        return false;
    }
}

bool Game::isFull(){
    for(size_t i = 0; i < 3; i++){
        for(size_t j = 0; j < 3; j++){
            if(positions.at(i).at(j) == ' '){
                return false;
            }
        }
    }
    return true;
}

bool Game::win(char playerSign2){
    for(size_t i = 0; i < 3; i++){
        if(positions.at(i).at(0) == playerSign2 && positions.at(i).at(1) == playerSign2 && positions.at(i).at(2) == playerSign2) return true;
        if(positions.at(0).at(i) == playerSign2 && positions.at(1).at(i) == playerSign2 && positions.at(2).at(i) == playerSign2) return true;
    }
    if(positions.at(0).at(0) == playerSign2 && positions.at(1).at(1) == playerSign2 && positions.at(2).at(2) == playerSign2) return true;
    if(positions.at(2).at(0) == playerSign2 && positions.at(1).at(1) == playerSign2 && positions.at(0).at(2) == playerSign2) return true;
    return false;
}

void Game::play(){
    int row , col;
    playerSign = 'X';
    while(true){
        display();
        std::cout << playerSign << "'s turn. Enter row and column: ";
        
        std::cin >> row >> col;
        if(row == -1 && col == -1){
            break;
        }
        if(!validateMove(row , col)){
            std::cout << "Invalid move. row and column should be between 1 and 3. Try again." << std::endl;
            continue;
        }

        if(!addMove(row - 1 , col - 1 , playerSign)){
            continue;
        }

        if(win(playerSign)){
            display();
            std::cout << playerSign << " wins." << std::endl;
            break;
        }

        if(isFull()){
            display();
            std::cout << "It's a tie." << std::endl;
            break;
        }

        if(playerSign == 'X'){
            playerSign = 'O';
        }
        else{
            playerSign = 'X';
        }
    }
}