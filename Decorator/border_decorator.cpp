#include "border_decorator.hpp"
#include <iostream>

Border_Decorator::Border_Decorator(VisualPtr view) : Decorator(std::move(view)){

}

void Border_Decorator::Draw(){
    Decorator::Draw();
    std::cout << "Border Decorator" << std::endl;
}