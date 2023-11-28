#ifndef CIRCLE_HPP
#define CIRCLE_HPP

#include "Shape.hpp"

class Circle : public Shape{
    public:
        Circle(int radius) : radius_(radius){};
        void draw() const override;
        Shape_ptr clone() override;
    private:
        int radius_;
};

#endif  //CIRCLE_HPP
