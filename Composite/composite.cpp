#include "draw.hpp"
using Picture_Ptr = std::shared_ptr<Picture>;

int main(){
    Shape_Ptr Rect = std::make_shared<Rectangle>(5, 6);
    Rect -> Draw();

    Picture_Ptr Pic = std::make_shared<Picture>();
    Pic -> Add(Rect);
    Pic -> Draw();

    Picture_Ptr Final_Pic = std::make_shared<Picture>();
    Final_Pic -> Add(Pic);

    Shape_Ptr Line_ = std::make_shared<Line>(4, 2);
    Line_ -> Draw();

    Final_Pic -> Add(Line_);
    Final_Pic -> Draw();
}