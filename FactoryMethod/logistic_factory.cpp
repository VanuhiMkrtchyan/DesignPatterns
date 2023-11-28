#include "logistic_factory.hpp"


std::unique_ptr<Transport> TruckLogisticFactory ::create_transport() {
            return std::make_unique<Truck>();
};

std::unique_ptr<Transport> ShipLogisticFactory :: create_transport() {
            return std::make_unique<Ship>();
};

void LogisticFactory::plan_delivery(){
    std::unique_ptr<Transport> tr = create_transport();
    tr->deliver();
}