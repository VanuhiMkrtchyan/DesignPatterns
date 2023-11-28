#include "Controller/controller.hpp"

int main(){
    BoardPtr board_ = std::make_shared<Board>();
    ViewPtr view_ = std::make_shared<C_View>();

    std::unique_ptr<Controller> controller = std::make_unique<Controller>(board_, view_);
    controller->run();
}