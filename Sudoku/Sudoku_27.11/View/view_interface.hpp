#ifndef VIEW_INTERFACE_HPP
#define VIEW_INTERFACE_HPP

#include <memory>

#include "../Model/board.hpp"

using BoardPtr = std::shared_ptr<Board>;

class I_View{
    public:
        virtual int get_input() = 0;
        virtual void display_message(const std::string) = 0;
        virtual void display_board(const BoardPtr board) = 0;
};

#endif //VIEW_INTERFACE_HPP