#ifndef TV_HPP
#define TV_HPP

#include "device.hpp"

class TV : public Device{
    public:
        bool isEnabled();
        void enable();
        void desable();
        int get_volume();
        void set_volume(int percent);
        int get_channel();
        void set_channel(int channel);
    private:
        int volume_;
        int channel_;
};

#endif //TV