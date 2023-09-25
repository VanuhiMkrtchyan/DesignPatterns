#ifndef MENSION_HPP
#define MENSION_HPP


#include "builder.hpp"


class Mansion : public Builder{
    public:
        void add_garden();
        void add_garage();
        void add_pool();
        void add_gym() override;
        void add_proch();
        House get_result() override;
    private:
        House home_;
};

#endif //MENSION_HPP