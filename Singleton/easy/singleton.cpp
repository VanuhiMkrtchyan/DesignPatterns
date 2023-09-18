#include <iostream>


#include "singleton.hpp"

Singleton::Singleton(){
            std::cout << "Created\n";
};
Singleton* Singleton::create_instance(){
    if(instance == nullptr){
        instance = new Singleton();
    }
    return instance;
}

int main(){
    Singleton::create_instance();
    Singleton::create_instance();
    Singleton::create_instance();


}