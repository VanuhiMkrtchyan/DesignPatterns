#ifndef SHAPE_REGISTRY_HPP
#define SHAPE_REGISTRY_HPP

#include <map>
#include <string>

#include "Shape.hpp"
#include "Circle.hpp"
#include "Rectangle.hpp"

#include <memory>

using Shape_ptr = std::unique_ptr<Shape>;
using Shape_Regisrty = std::map<const std::string, Shape_ptr>;

class ShapeRegistry{
public:
    ShapeRegistry(){
        registry["circle"] = std::make_unique<Circle>(4);
        registry["rectangle"] = std::make_unique<Rectangle>(5, 6);

    }
    Shape_ptr operator[](const std::string);
    Shape_Regisrty registry;
};


#endif //SHAPE_REGISTRY_HPP
