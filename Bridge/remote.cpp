#include "remote.hpp"

void Remote::toggle_power(){
    if(device->isEnabled()){
        device->desable();
    }
    else{
        device->enable();
    }
}
void Remote::volume_up(){
    int vol = device->get_volume();
    vol++;
    device->set_volume(vol);
}
void Remote::volume_down(){
    int vol = device->get_volume();
    vol--;
    device->set_volume(vol);
}
void Remote::channel_up(){
    int ch = device->get_channel();
    ch++;
    device->set_channel(ch);
}
void Remote::channel_down(){
    int ch = device->get_channel();
    ch--;
    device->set_channel(ch);

}
