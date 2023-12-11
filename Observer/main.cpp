#include <iostream>
#include <memory>

#include "publisher.hpp"
#include "subscriber.hpp"

int main(){
    SubscriberPtr sub1 = std::make_unique<Subscriber>();
    SubscriberPtr sub2 = std::make_unique<Subscriber>();

    std::unique_ptr<Publisher> publisher = std::make_unique<Publisher>();
    publisher->subscribe(sub1);
    publisher->subscribe(sub2);
    publisher->set_data(20);
    publisher->unsubscribe(sub1);
    publisher->set_data(15);
 
}