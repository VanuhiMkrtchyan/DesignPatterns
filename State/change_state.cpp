#include "file.hpp"
#include "state.hpp"
#include <iostream>

void Change_State::open(File* file) {
    std::cout << "File is  open" << std::endl;
    file->set_state(new Open_State());
    delete this;

}

void Change_State::change(File* file){
    std::cout << "File is allready in changing mode" << std::endl;
}

void Change_State::close(File* file) {
    std::cout << "Closing the file" << std::endl;
    file->set_state(new Close_State());
    delete this;
}
