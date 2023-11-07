#ifndef REMOTE_HPP
#define REMOTE_HPP

#include <memory>

#include "device.hpp"
#include "radio.hpp"
#include "tv.hpp"

class Remote{
    public:
        Remote(std::unique_ptr<Device> _device) : device{std::move(_device)}{}
        void toggle_power();
        void volume_up();
        void volume_down();
        void channel_up();
        void channel_down();

    private:
        std::unique_ptr<Device> device;
};

#endif //REMOTE_HPP