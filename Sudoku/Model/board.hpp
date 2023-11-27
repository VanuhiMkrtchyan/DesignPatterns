#ifndef BOARD_HPP
#define BOARD_HPP

#include <utility>
#include <vector>

class Board{
    public:
        using SIZE = int;
        using LINE = std::vector<std::pair<int, bool>>;
        using PUZZLE = std::vector<LINE>;
        struct COORD{
            int x_, y_;
            COORD() = default;
            COORD(int x = 0, int y = 0) : x_{x}, y_{y}{}
        };
    public:
        Board(SIZE size);
        SIZE get_size() const;
        void set_size(SIZE&);
        COORD get_coord() const;
        void set_coord(int, int);
        int get_value(COORD) const;
        void set_value(int);

        bool is_complete();
        bool is_valid_move(int);
        bool is_empty(COORD);
        bool is_changable(COORD);
    private:
        bool is_valid_row(int);
        bool is_valid_column(int);
        bool is_valid_box(int);

    private:
        SIZE grid_size;
        SIZE subgrid_size;
        COORD point;
        PUZZLE puzzle_;
};
#endif //BOARD_HPP