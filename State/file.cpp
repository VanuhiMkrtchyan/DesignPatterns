#include "file.hpp"

void File::open(){
    current_state->open(this);
}

void File::change(){
    current_state->change(this);
}

void File::close(){
    current_state->close(this);
}

void File::set_state(State* state){
    current_state = state;
}

    