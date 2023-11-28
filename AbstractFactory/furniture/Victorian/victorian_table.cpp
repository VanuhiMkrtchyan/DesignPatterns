#include "../table.hpp"

#include <iostream>

class VictorianTable : public Table{
    public:
        bool has_legs() override{
            return true;
        }
        void sit_around() override{
            std::cout << "Sitting around Victorian Table" << std::endl;
        }
};