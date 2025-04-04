#ifndef TICTACTOE_HPP
#define TICTACTOE_HPP

#include <vector>

class Game{
    public:
        Game();

        bool addMove(int row , int col , char playerSign2);
        bool validateMove(int row , int col);
        bool isFull();
        bool win(char playerSign2);

        void display();
        void play();

    private:
        char playerSign;
        std::vector<std::vector<char>> positions;
};

#endif