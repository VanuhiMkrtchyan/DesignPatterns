#ifndef VISUAL_HPP
#define VISUAL_HPP

#include <memory>

class VisualComponent{
    public:
        VisualComponent() = default;
        virtual ~VisualComponent() = default;
        virtual void Draw() = 0;
};

using VisualPtr = std::unique_ptr<VisualComponent>;

#endif //VISUAL_HPP