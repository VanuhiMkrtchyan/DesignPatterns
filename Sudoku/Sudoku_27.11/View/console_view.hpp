#ifndef CONSOLE_VIEW_HPP
#define CONSOLE_VIEW_HPP

#include <string>

#include "view_interface.hpp"


class C_View : public I_View{
    public:
        int get_input() override;
        void display_message(const std::string) override;
        void display_board(const BoardPtr board) override;
};

#endif //CONSOLE_VIEW_HPP