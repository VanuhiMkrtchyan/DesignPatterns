#include "console_view.hpp"

#include <iostream>

int C_View::get_input(){
    int num;
    std::cin >> num;
    return num;
}

void C_View::display_message(const std::string msg){
    std::cout << msg << std::endl;
}

void C_View::display_board(const BoardPtr board){
    auto size = board->get_size();
    auto Size = std::pow(size, 2);
    for(auto i =  0; i < Size; i++){
        for(auto j = 0; j < Size; j++){
            std::cout << board->get_value((i,j)) << "  ";
        }
        std::cout << std::endl;
    }

}

        
