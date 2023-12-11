#include "publisher.hpp"
#include <algorithm>

void Publisher::subscribe(SubscriberPtr& s){
    subscribers.push_back(s);
}

void Publisher::unsubscribe(SubscriberPtr& s){
    subscribers.erase(std::remove(subscribers.begin(), subscribers.end(), s),subscribers.end());
}

void Publisher::notify(){
    for(auto& s: subscribers){
        s->update(data);
    }
}

void Publisher::set_data(int new_data){
    data = new_data;
    notify();
}