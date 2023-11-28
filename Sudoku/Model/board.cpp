#include "board.hpp"

#include <cmath>

Board::SIZE Board::get_size() const{
    return subgrid_size;
}

void Board::set_size(SIZE& size){
    subgrid_size = size;
    grid_size = std::pow(subgrid_size, 2);
}

Board::COORD Board::get_coord() const{
    return point;
}

void Board::set_coord(int x, int y){
    point = COORD{x,y};
}

int Board::get_value(COORD) const{
    return puzzle_[point.x_][point.y_].first;
}

void Board::set_value(int val){
    puzzle_[point.x_][point.y_].first = val;
}


bool Board::is_complete(){
    for(auto i = 0; i < grid_size; i++){
        for(auto j = 0; j < grid_size; j++){
            if(is_empty((i,j))){
                return true;
            }
        }
    }
    return false;

}

bool Board::is_valid_move(int num){
    return is_valid_box(num) && is_valid_column(num) && is_valid_row(num);
}

bool Board::is_empty(COORD){
    if(puzzle_[point.x_][point.y_].first == 0){
        return true;
    }
    return false;
}
bool Board::is_changable(COORD){
    return puzzle_[point.x_][point.y_].second;
}


bool Board::is_valid_row(int num){
    for(auto col = 0; col < grid_size; col++){
        if(puzzle_[point.x_][col].first == num){
            return true;
        }
    }
    return false;

}

bool Board::is_valid_column(int num){
    for(auto row = 0; row < grid_size; row++){
        if(puzzle_[row][point.y_].first == num){
            return true;
        }
    }
    return false;

}

bool Board::is_valid_box(int num){
    int BoxStart_row = point.x_ - point.x_ % subgrid_size;
    int BoxStart_col = point.y_ - point.y_ % subgrid_size;
    for(auto i = 0; i < subgrid_size; i++){
        for(auto j = 0; j < subgrid_size; j++){
            if(puzzle_[i + BoxStart_row][j + BoxStart_col].first == num){
                return true;
            }
        }
    }
    return false;

}

