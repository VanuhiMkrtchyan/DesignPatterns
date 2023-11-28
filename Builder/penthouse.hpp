#ifndef PENTHOUSE_HPP
#define PENTHOUSE_HPP

#include "builder.hpp"

class Penthouse :public Builder{
    public:
        void add_pool();
        void add_gym() override;
        House get_result() override;
    private:
        House home_;

};

#endif //PENTHOUSE_HPP
