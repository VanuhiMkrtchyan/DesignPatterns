#include "board.hpp"

#include <cmath>
#include <fstream>
#include <iostream>

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

int Board::get_value(COORD c) const{
    return puzzle_[c.x_][c.y_].first;
}

void Board::set_value(int val){
    puzzle_[point.x_][point.y_].first = val;
}


bool Board::not_complete(){
    for(auto i = 0; i < grid_size; i++){
        for(auto j = 0; j < grid_size; j++){
            auto temp = COORD{i, j};
            if(is_empty(temp)){
                return true;
            }
        }
    }
    return false;

}

bool Board::is_valid_move(int num){
    std::cout << is_valid_box(num) << is_valid_column(num) << is_valid_row(num) << std::endl;
    return is_valid_box(num) && is_valid_column(num) && is_valid_row(num);
}

bool Board::is_empty(COORD& c){
    std::cout << c.x_ << c.y_ << std::endl;
    if(puzzle_[c.x_][c.y_].first == 0){
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
            return false;
        }
    }
    return true;

}

bool Board::is_valid_column(int num){
    for(auto row = 0; row < grid_size; row++){
        if(puzzle_[row][point.y_].first == num){
            return false;
        }
    }
    return true;

}

bool Board::is_valid_box(int num){
    int BoxStart_row = point.x_ - point.x_ % subgrid_size;
    int BoxStart_col = point.y_ - point.y_ % subgrid_size;
    for(auto i = 0; i < subgrid_size; i++){
        for(auto j = 0; j < subgrid_size; j++){
            if(puzzle_[i + BoxStart_row][j + BoxStart_col].first == num){
                return false;
            }
        }
    }
    return true;

}

void Board::read_matrix(){
    std::ifstream matrix_file("/home/vanuhi/4th_course/Sudoku_27.11/matrix.txt");
    for(auto i = 0; i < grid_size; i++){
        std::vector<int> temp;
        for(auto j = 0; j < grid_size; j++){
            int num;
            matrix_file >> num;
            //std::cout << num << "  ";
            temp.push_back(num);
        }
        matrix.push_back(temp);
    }


}

void Board::create_puzzle(){
    for(auto i = 0; i < grid_size; i++){
        LINE temp;
        for(auto j = 0; j < grid_size; j++){
            bool state = false;
            if(matrix[i][j] == 0){            
                state = true;
            }     
            temp.push_back(std::make_pair(matrix[i][j], state));
        }
        puzzle_.push_back(temp);
    }
}

    