#ifndef SCROLL_HPP
#define SCROLL_HPP

#include "decorator.hpp"

class Scroll : public Decorator{
    public:
        Scroll(VisualPtr view);
        Scroll() = default;
        void Draw();
    private:
        int scrollPosition;
};

#endif //SCROLL_HPP