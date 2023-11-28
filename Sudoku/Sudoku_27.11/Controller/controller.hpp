#ifndef CONTROLLER_HPP
#define CONTROLLER_HPP

#include <memory>

#include "../View/console_view.hpp"
#include "../Model/board.hpp"


using BoardPtr = std::shared_ptr<Board>;
using ViewPtr = std::shared_ptr<C_View>;

class Controller{
    public:
        Controller(ViewPtr& view, BoardPtr& board);
        void run();
        void handle_input();
    private:
        BoardPtr board_;
        ViewPtr view_;
};

#endif //CONTROLLER_HPP