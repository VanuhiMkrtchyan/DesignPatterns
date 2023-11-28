#include "director.hpp"
#include "mansion.hpp"
#include "penthouse.hpp"
#include "townhouse.hpp"

#include <memory>

int main(){
    std::unique_ptr<Director> director = std::make_unique<Director>();
    std::unique_ptr<Builder> mansion = std::make_unique<Mansion>();
    House home = director->constructor(move(mansion));
    std::unique_ptr<Builder> penthouse = std::make_unique<Penthouse>();
    home = director->constructor(move(penthouse));
     std::unique_ptr<Builder> townhouse = std::make_unique<Townhouse>();
    home = director->constructor(move(townhouse));
}