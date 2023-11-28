#ifndef TOWNHOUSE_HPP
#define TOWNHOUSE_HPP

#include "builder.hpp"

class Townhouse : public Builder{
    public:
        void add_garden();
        void add_garage();
        void add_gym() override;
        void add_proch();
        House get_result() override;
    private:
        House home_;

};


#endif //TOWNHOUSE_HPP
