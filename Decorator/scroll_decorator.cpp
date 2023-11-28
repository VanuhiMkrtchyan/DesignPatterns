#include <iostream>

#include "scroll_decorator.hpp"

Scroll::Scroll(VisualPtr view):Decorator{std::move(view)}
{
}

void Scroll::Draw()
{
    Decorator::Draw();
    std::cout << "Scroll decoration is drawn" << std::endl;
}
