#include "../chair.hpp"

#include <iostream>

class VictorianChair : public Chair{
    public:
        bool has_legs() override{
            return true;
        }
        void sit_on() override{
            std::cout << "Sitting on Victtorian Chair" << std::endl;
        }
};