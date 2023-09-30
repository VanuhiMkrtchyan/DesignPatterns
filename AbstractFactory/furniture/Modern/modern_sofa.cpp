#include "../sofa.hpp"

#include <iostream>

class ModernSofa : public Sofa{
    public:
        bool has_legs() override{
            return false;
        }
        void relax_on() override{
            std::cout << "Relaxing on Modern Sofa" << std::endl;
        }
};