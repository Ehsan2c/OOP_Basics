#include "sky.hpp"

int main(){
    Sky sky;

    sky.add_star(Star(10 , 10 , 25));
    sky.add_star(Star(20 , 20 , 10));
    sky.add_star(Star(54 , 5 , 15));
    sky.add_star(Star(50, 29 , 55));
    sky.add_star(Star(70 , 10 , 55));
    sky.add_star(Star(72 , 22 , 55));
    sky.add_star(Star(110 , 15 , 55));
    sky.add_star(Star(100 , 12 , 55));
    sky.add_star(Star(130 , 8 , 55));

    //sky.render();

    sky.print();

    return 0;
}