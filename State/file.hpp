#ifndef FILE_HPP
#define FILE_HPP

#include "state.hpp"

class File{
    public:
        File() : current_state{new Close_State()}{}
        void open();
        void change();
        void close();
        void set_state(State*);
    private:
        State* current_state;
        

};

#endif //FILE_HPP