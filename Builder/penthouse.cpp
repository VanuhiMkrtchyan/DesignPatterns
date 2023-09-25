#include "penthouse.hpp"

void Penthouse::add_pool(){
    std::cout << "      Pool added" << std::endl;
    home_.has_pool = true;   
}

void Penthouse::add_gym(){
    std::cout << "      Gym added" << std::endl;
    home_.has_gym = true;   
}

House Penthouse::get_result(){
    std::cout << "Penthouse---->" << std::endl;
    add_gym();
    add_pool();
    return home_;
}
