#ifndef SUBSCRIBE_HPP
#define SUBSCRIBE_HPP

#include <memory>

class Subscriber{
    public:
        void update(int data);
};

using SubscriberPtr = std::shared_ptr<Subscriber>;

#endif //SUBSCRIBE_HPP