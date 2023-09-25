#ifndef BUILDER_HPP
#define BUILDER_HPP

#include <iostream>

#include "house.hpp"

class Builder{
    public:
        virtual void add_gym() = 0;
        virtual House get_result() = 0;
    private:
        House house_;

};


#endif //BUILDER_HPP

