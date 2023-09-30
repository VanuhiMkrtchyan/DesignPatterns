#include "../sofa.hpp"

#include <iostream>

class VictorianSofa : public Sofa{
    public:
        bool has_legs() override{
            return true;
        }
        void relax_on() override{
            std::cout << "Relaxing on Victorian Sofa" << std::endl;
        }
};