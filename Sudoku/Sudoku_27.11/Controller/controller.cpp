#include "controller.hpp"
#include <iostream>

Controller::Controller(ViewPtr& view, BoardPtr& board) : view_{view}, board_{board}{
}

void Controller::run(){
    board_->read_matrix();
    board_->create_puzzle();
    view_->display_board(board_);
    while(board_->not_complete()){
        handle_input();
    }
    std::cout << "End of run" << std::endl;
}

void Controller::handle_input(){
    std::cout << "handle input" << std::endl;
    view_->display_message("Input Coordinates->");
    auto x = view_->get_input();
    auto y = view_->get_input();
    std::cout << "x->" << x << "  y->" << y << std::endl;
    auto temp = Board::COORD{x,y};
    if(board_->is_changable((x,y)) and board_->is_empty(temp)){
        std::cout << "in 1st if " << std::endl;
        board_->set_coord(x, y);
        view_->display_message("Input value->");
        auto val = view_->get_input();
        if(!board_->is_valid_move(val)){
            view_->display_message("Wrong value");
        }
        else{
            board_->set_value(val);
        }
    }
    else{
        view_->display_message("Coordinate can't be changet");
    }
}

    