#include "file.hpp"
#include "state.hpp"

#include <iostream>

void Open_State::open(File* file) {
    std::cout << "File is allready open" << std::endl;
}

void Open_State::change(File* file){
    std::cout << "Changing file content" << std::endl;
    file->set_state(new Change_State());
    delete this;
}

void Open_State::close(File* file) {
    std::cout << "Closing the file" << std::endl;
    file->set_state(new Close_State());
    delete this;
}

