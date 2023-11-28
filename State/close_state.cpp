#include "file.hpp"
#include "state.hpp"

#include <iostream>

void Close_State::open(File* file) {
    std::cout << "File is  open" << std::endl;
    file->set_state(new Open_State());
    delete this;

}

void Close_State::change(File* file){
    std::cout << "File is closed" << std::endl;
}

void Close_State::close(File* file) {
    std::cout << "File is allredy closed" << std::endl;
}
