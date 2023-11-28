#ifndef TRANSPORT_HPP
#define TRANSPORT_HPP

class Transport{
    public:
        virtual void deliver() = 0;
        virtual ~Transport() = default;
};

class Truck : public Transport{
    public:
        void deliver() override;
};

class Ship : public Transport{
    public:
        void deliver() override;
};

#endif //TRANSPORT_HPP