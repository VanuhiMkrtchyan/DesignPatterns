#include "victorian_factory.hpp"
#include "../../furniture/Victorian/victorian_chair.cpp"
#include "../../furniture/Victorian/victorian_sofa.cpp"
#include "../../furniture/Victorian/victorian_table.cpp"

Chair* VictorianFactory::create_chair(){
    return new VictorianChair();
}

Table* VictorianFactory::create_table(){
    return new VictorianTable();
}

Sofa* VictorianFactory::create_sofa(){
    return new VictorianSofa();
}