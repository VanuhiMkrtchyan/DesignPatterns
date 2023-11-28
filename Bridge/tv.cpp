#include <iostream>

#include "tv.hpp"

bool TV::isEnabled(){
    return true;
}
void TV::enable(){
    std::cout << "TV is enabled" << std::endl;
}
void TV::desable(){
    std::cout << "TV is desenabled" << std::endl;

}
int TV::get_volume(){
    return volume_;
}
void TV::set_volume(int percent){
    volume_ = percent;
}
int TV::get_channel(){
    return channel_;
}
void TV::set_channel(int channel){
    channel_ = channel;
}