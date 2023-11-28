#ifndef DRAW_HPP
#define DRAW_HPP

#include <memory>
#include <vector>

#include "graphic.hpp"

using Shape_Ptr = std::shared_ptr<Shape>;

class Rectangle : public Shape{
    public:
        Rectangle(int x, int y);
        void Draw() const override;
    private:
        int x_ = 0;
        int y_ = 0;
};


class Line : public Shape{
    public:
        Line(int x, int y);
        void Draw() const override;
    private:
        int x_ = 0;
        int y_ = 0;

};

class Picture : public Shape{
    public:
        Picture() = default;
        void Draw() const override;
        void Add(Shape_Ptr const&);
    private:
        std::vector<Shape_Ptr> Shape_Objects;
};




#endif //DRAW_HPP