#ifndef DECORATOR_HPP
#define DECORATOR_HPP

#include "Visual.hpp"

class Decorator : public VisualComponent{
    public:
        Decorator() = default;
        Decorator(VisualPtr);
        void Draw() override;
    private:
        VisualPtr view_;
};

#endif //DECORATOR_HPP