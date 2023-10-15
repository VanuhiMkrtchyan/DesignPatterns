#include <iostream>
#include <memory>


class OldLibrary{
    public:
        void legacy_method(){
            std::cout << "Legacy method in Old Library" << std::endl;
        }
};

class Target{
    public:
        virtual void new_method() = 0;
};

class Adapter : public Target{
    public:
        void new_method() override{ 
            old_lib.legacy_method();
        }
    private:
        OldLibrary old_lib;

};

int main(){
    std::unique_ptr<OldLibrary> lib = std::make_unique<OldLibrary>();
    std::unique_ptr<Target> adapter = std::make_unique<Adapter>();
    adapter -> new_method();
}