#include "subscriber.hpp"

#include <iostream>

void Subscriber::update(int data){
    std::cout << "Subscriber is updated" << data << std::endl;
}