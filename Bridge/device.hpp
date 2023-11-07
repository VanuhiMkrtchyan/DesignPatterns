#ifndef DEVICE_HPP
#define DEVICE_HPP

class Device{
public:
    virtual ~Device(){}
    virtual bool isEnabled() = 0;
    virtual void enable() = 0;
    virtual void desable() = 0;
    virtual int get_volume() = 0;
    virtual void set_volume(int percent) = 0;
    virtual int get_channel() = 0;
    virtual void set_channel(int channel) = 0;

};

#endif //DEVICE_HPP