#include "builder.hpp"

#include <memory>

class Director{
    public:
        House constructor(std::unique_ptr<Builder> builder){
            return builder->get_result();
        }
};