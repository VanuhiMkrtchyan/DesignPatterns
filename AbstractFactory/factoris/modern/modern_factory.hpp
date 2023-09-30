#include "../furniture_factory.hpp"

class ModernFactory : public FurnitureFactory{
    public:
        Chair* create_chair() override;
        Table* create_table() override;
        Sofa* create_sofa()override;

};
