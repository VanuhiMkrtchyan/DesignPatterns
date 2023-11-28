#include <iostream>

#include "radio.hpp"

bool Radio::isEnabled(){
    return true;
}
void Radio::enable(){
    std::cout << "Radio is enabled" << std::endl;
}
void Radio::desable(){
    std::cout << "Radio is desenabled" << std::endl;

}
int Radio::get_volume(){
    return volume_;
}
void Radio::set_volume(int percent){
    volume_ = percent;
}
int Radio::get_channel(){
    return channel_;
}
void Radio::set_channel(int channel){
    channel_ = channel;
}