#ifndef FURNITURE_FACTORY_HPP
#define FURNITURE_FACTORY_HPP

#include "../furniture/chair.hpp"
#include "../furniture/table.hpp"
#include "../furniture/sofa.hpp"


class FurnitureFactory{
    public:
        virtual Chair* create_chair() = 0;
        virtual Table* create_table() = 0;
        virtual Sofa* create_sofa() = 0;
};

#endif //FURNITURE_FACTORY_HPP