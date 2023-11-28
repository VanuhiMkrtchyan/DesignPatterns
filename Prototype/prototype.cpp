#include "Shape.hpp"
#include "Shape_Registry.hpp"

#include <memory>

int main(){
    std::unique_ptr<ShapeRegistry> ShapeReg = std::make_unique<ShapeRegistry>();
    Shape_ptr cloreRectangle = ShapeReg->operator[]("rectangle")->clone();
    Shape_ptr cloneCircle = ShapeReg->operator[]("circle")->clone();

}

