#include "controller.hpp"

Controller::Controller(ViewPtr view, BoardPtr board) : view_{view}, board_{board}{
}

void Controller::run(){
    while(board_->is_complete()){
        handle_input();
    }
}

void Controller::handle_input(){
    view_->display_message("Input Coordinates->");
    auto x = view_->get_input();
    auto y = view_->get_input();
    if(board_->is_changable((x,y)) and board_->is_empty((x, y))){
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

    