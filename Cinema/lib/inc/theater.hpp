#ifndef THEATER_HPP
#define THEATER_HPP

#include <vector>
#include <string>

class Theater{
    public:
        Theater();
        Theater(std::string name2 , int rows , int cols);

        std::string get_name() const;

        void displayMovies();
        void displaySeats(int movieNumber);
        
        bool reserveSeat(int movieNumber , int row , int col);
        bool validateSeat(int row , int col);
        bool isFull(int movieNumber);

        int movieSize();

    private:
        std::string name;
        std::vector<std::vector<std::vector<std::string>>> seats;
        std::vector<std::string> movies = {"Movie 1" , "Movie 2"};
        int rows;
        int cols;
};

#endif