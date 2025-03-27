#include <iostream>
#include "game.hpp"

int main(){
    try{
        Game game;
        Character Ali( "Ali" , 100 , 100);
        Character hamid( "Hamid" , 200 , 200); 

        Ali.add_skill( "boxing" , 50);
        Ali.add_skill("swimming" , 20);
        hamid.add_skill("basketball" , 25);
        
        game.add_character(Ali);
        game.add_character(hamid);

        Ali.print_skills();
        Ali.print();

        game.print();
    }
    catch(std::out_of_range & e){
        std::cout << e.what() << std::endl;
    }
    
    return 0;
}