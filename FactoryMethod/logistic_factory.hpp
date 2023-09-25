#ifndef LOGISTIC_FACTORY_HPP
#define LOGISTIC_FACTORY_HPP

#include <memory>

#include "transport.hpp"

class LogisticFactory{
    public:
        virtual std::unique_ptr<Transport> create_transport() = 0;
        void plan_delivery();
        virtual ~LogisticFactory() = default;
};

class TruckLogisticFactory : public LogisticFactory{
    public:
        std::unique_ptr<Transport> create_transport() override;
};

class ShipLogisticFactory : public LogisticFactory{
    public:
        std::unique_ptr<Transport> create_transport() override;
};

#endif //LOGISTIC_FACTORY_HPP