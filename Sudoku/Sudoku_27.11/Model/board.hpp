#ifndef BOARD_HPP
#define BOARD_HPP

#include <cmath>
#include <utility>
#include <vector>

class Board{
    public:
        using SIZE = int;
        using Vect = std::vector<std::vector<int>>;
        using LINE = std::vector<std::pair<int, bool>>;
        using PUZZLE = std::vector<LINE>;
        struct COORD{
            int x_, y_;
            COORD(int x = 0, int y = 0) : x_{x}, y_{y}{}
        };
    public:
        Board(SIZE size) : subgrid_size{size}{
            grid_size = std::pow(subgrid_size, 2);
        }
        SIZE get_size() const;
        void set_size(SIZE&);
        COORD get_coord() const;
        void set_coord(int, int);
        int get_value(COORD) const;
        void set_value(int);

        bool not_complete();
        bool is_valid_move(int);
        bool is_empty(COORD&);
        bool is_changable(COORD);
        
        void read_matrix();
        void create_puzzle();
    private:
        bool is_valid_row(int);
        bool is_valid_column(int);
        bool is_valid_box(int);

    private:
        SIZE grid_size;
        SIZE subgrid_size;
        COORD point;
        Vect matrix;
        PUZZLE puzzle_;
};
#endif //BOARD_HPP