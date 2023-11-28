#include "Circle.hpp"

void Circle::draw() const {
    std::cout << "Circle is drawen" <<std::endl;
}
Shape_ptr Circle::clone(){
    return std::make_unique<Circle>(*this);
}