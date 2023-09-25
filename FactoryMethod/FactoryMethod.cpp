#include <iostream>
#include <memory>

#include "logistic_factory.hpp"

int main(){
    std::unique_ptr<LogisticFactory> Truck = std::make_unique<TruckLogisticFactory>();
    Truck -> plan_delivery();

    std::unique_ptr<LogisticFactory> Ship = std::make_unique<ShipLogisticFactory>();
    Ship -> plan_delivery();
}
