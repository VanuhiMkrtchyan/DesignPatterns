#include "remote.hpp"


int main(){
    std::unique_ptr<Radio> radio = std::make_unique<Radio>();
    radio->set_volume(100);
    radio->set_channel(5);
    std::unique_ptr<TV> tv = std::make_unique<TV>();
    tv->set_channel(3);
    tv->set_volume(30);
    std::unique_ptr<Remote> tv_remote = std::make_unique<Remote>(std::move(tv));
    tv_remote->toggle_power();
    tv_remote->channel_up();
    std::unique_ptr<Remote> radio_remote = std::make_unique<Remote>(std::move(radio));
    radio_remote->toggle_power();
    radio_remote->channel_down();

    
}