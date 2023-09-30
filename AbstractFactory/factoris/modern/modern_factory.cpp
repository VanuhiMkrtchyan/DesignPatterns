#include "modern_factory.hpp"
#include "../../furniture/Modern/modern_chair.cpp"
#include "../../furniture/Modern/modern_sofa.cpp"
#include "../../furniture/Modern/modern_table.cpp"

Chair* ModernFactory::create_chair(){
    return new ModernChair();
}

Table* ModernFactory::create_table(){
    return new ModernTable();
}

Sofa* ModernFactory::create_sofa(){
    return new ModernSofa();
}