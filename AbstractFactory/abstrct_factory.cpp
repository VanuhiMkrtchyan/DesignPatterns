#include <memory>

#include "factoris/furniture_factory.hpp"
#include "factoris/modern/modern_factory.hpp"
#include "factoris/victorian/victorian_factory.hpp"

int main(){
    std::unique_ptr<FurnitureFactory> modernFactory = std::make_unique<ModernFactory>();
    Chair* modernChair =  modernFactory->create_chair();
    Table* modernTable = modernFactory->create_table();
    Sofa* modernSofa = modernFactory->create_sofa();
    modernChair->sit_on();
    modernSofa->relax_on();
    modernTable->sit_around();


    std::unique_ptr<FurnitureFactory> victorianFactory = std::make_unique<VictorianFactory>();
    Chair* victorianChair =  victorianFactory->create_chair();
    Table* victorianTable = victorianFactory->create_table();
    Sofa* victorianSofa = victorianFactory->create_sofa();
    victorianChair->sit_on();
    victorianSofa->relax_on();
    victorianTable->sit_around();

    delete modernChair;
    delete modernSofa;
    delete modernTable;
    delete victorianChair;
    delete victorianSofa;
    delete victorianTable;


}