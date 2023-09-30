#include "../chair.hpp"

#include <iostream>

class ModernChair : public Chair{
    public:
        bool has_legs() override{
            return false;
        }
        void sit_on() override{
            std::cout << "Sitting on Modern Chair" << std::endl;
        }
};