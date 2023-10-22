#ifndef BORDER_HPP
#define BORDER_HPP

#include "decorator.hpp"

class Border_Decorator : public Decorator{
    public:
        Border_Decorator(VisualPtr);
        Border_Decorator() = default;
        void Draw() override;
        void Add_Border();
};


#endif //BORDER_HPP