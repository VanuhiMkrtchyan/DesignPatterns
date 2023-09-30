#include "../table.hpp"

#include <iostream>

class ModernTable : public Table{
    public:
        bool has_legs() override{
            return false;
        }
        void sit_around() override{
            std::cout << "Sitting around Modern Table" << std::endl;
        }
};