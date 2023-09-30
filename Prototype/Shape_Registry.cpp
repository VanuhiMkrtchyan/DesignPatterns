#include "Shape_Registry.hpp"

///TODO: add value for Circle and Rectangle

Shape_ptr ShapeRegistry::operator[](const std::string shape){
    return std::move(registry[shape]);
}