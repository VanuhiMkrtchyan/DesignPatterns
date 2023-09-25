#ifndef HOUSE_HPP
#define HOUSE_HPP

#include "builder.hpp"

class House{
    public:
        House(){};
    public:
        bool has_garden;
        bool has_garage;
        bool has_pool;
        bool has_gym;
        bool has_porch;
        /*void show_details(){
            std::cout << has_garage <<std::endl;
        };*/
};

#endif //HOUSE_HPP

