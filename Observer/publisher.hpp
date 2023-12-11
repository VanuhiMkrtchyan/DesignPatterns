#ifndef PUBLISHER_HPP
#define PUBLISHER_HPP

#include "subscriber.hpp"

#include <iostream>
#include <memory>
#include <vector>

class Publisher{
    public:
        void subscribe(SubscriberPtr& s);
        void unsubscribe(SubscriberPtr& s);
        void notify();
        void set_data(int new_data);
    private:
        std::vector<SubscriberPtr> subscribers;
        int data;
};

#endif //PUBLISHER_HPP