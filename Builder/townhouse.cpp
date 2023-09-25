#include "townhouse.hpp"


void Townhouse::add_garden(){
    std::cout << "      Garden added" << std::endl;
    home_.has_garden = true;
}

void Townhouse::add_garage(){
    std::cout << "      Garage added" << std::endl;
    home_.has_garage = true;
}

void Townhouse::add_proch(){
    std::cout << "      Porch added" << std::endl;
    home_.has_porch = true;
}

void Townhouse::add_gym(){
    std::cout << "      Gym added" << std::endl;
    home_.has_gym = true;   
}

House Townhouse::get_result(){
    std::cout << "Townhouse------>" << std::endl;
    add_garage();
    add_garden();
    add_gym();
    add_proch();
    return home_;
}




