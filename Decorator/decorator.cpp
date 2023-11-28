#include "decorator.hpp"
#include <iostream>
Decorator::Decorator(VisualPtr view) : view_{std::move(view)}{

}

void Decorator::Draw(){
    view_->Draw();
    std::cout << "Decorator Draw" << std::endl;
}