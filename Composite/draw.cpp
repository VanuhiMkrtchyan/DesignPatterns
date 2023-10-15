#include <iostream>

#include "draw.hpp"

Rectangle::Rectangle(int x, int y) : x_{x}, y_{y}
{}

void Rectangle::Draw() const{
    std::cout << "Rectangle is drawn with parameters: " << x_ << "  " << y_ << std::endl;
}

Line::Line(int x, int y) : x_{x}, y_{y}
{}

void Line::Draw() const{
    std::cout << "Line is drawn with coordinates:  " << x_ << "  " << y_ << std::endl;
}

void Picture::Draw() const{
    for(auto const object : Shape_Objects){
        object -> Draw();
    }
}

void Picture::Add(Shape_Ptr const& Graph_obj){
    Shape_Objects.push_back(Graph_obj);
}