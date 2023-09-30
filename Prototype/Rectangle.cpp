#include "Rectangle.hpp"

void Rectangle::draw() const {
    std::cout << "Rectangle is drawen" <<std::endl;
}
Shape_ptr Rectangle::clone() {
    return std::make_unique<Rectangle>(*this);
}