#ifndef RECTANGLE_HPP
#define RECTANGLE_HPP

#include "Shape.hpp"

class Rectangle : public Shape{
    public:
        Rectangle(int w, int h) : width(w), heigth(h){};
        void draw() const override;
        Shape_ptr clone() override;
    private:
        int width;
        int heigth;
};


#endif //RECTANGLE_HPP