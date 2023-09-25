#include "mansion.hpp"

void Mansion::add_garden(){
    std::cout << "      Garden added" << std::endl;
    home_.has_garden = true;
}

void Mansion::add_pool(){
    std::cout << "      Pool added" << std::endl;
    home_.has_pool = true;   
}

void Mansion::add_garage(){
    std::cout << "      Garage added" << std::endl;
    home_.has_garage = true;
}

void Mansion::add_proch(){
    std::cout << "      Porch added" << std::endl;
    home_.has_porch = true;
}

void Mansion::add_gym(){
    std::cout << "      Gym added" << std::endl;
    home_.has_gym = true;   
}

House Mansion::get_result(){
    std::cout << "Mansion------>" << std::endl;
    add_garage();
    add_garden();
    add_gym();
    add_pool();
    add_proch();
    
    return home_;
}
