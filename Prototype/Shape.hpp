#ifndef SHAPE_HPP
#define SHAPE_HPP

#include <iostream>
#include <memory>


class Shape{
    public:
        Shape(){};
        virtual void draw() const = 0;
        virtual std::unique_ptr<Shape> clone() = 0;
        virtual ~Shape(){}
    private:
        int parametr;

};

using Shape_ptr = std::unique_ptr<Shape>;
#endif //SHAPE_HPP
