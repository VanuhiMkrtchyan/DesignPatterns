#include "Controller/controller.hpp"
#include <iostream>

int main(){
    BoardPtr board_ = std::make_shared<Board>(3);
    ViewPtr view_ = std::make_shared<C_View>();

    std::unique_ptr<Controller> controller = std::make_unique<Controller>( view_, board_);
    std::cout << "Start running" <<std::endl;
    controller->run();
}