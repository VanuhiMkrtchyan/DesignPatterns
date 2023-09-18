#include <iostream>
#include <vector>
#include <thread>


class Singleton{
    private:
        Singleton(){
            std::cout << "Created\n";
        };
    public:
        static Singleton& create_instance(){
            static Singleton instance;
            return instance;
        };

        Singleton(Singleton const&) = delete;
        Singleton operator =(Singleton const&) = delete;
};


int main(){
    std::vector<std::thread> threads;
    for(auto i = 0; i < 100; i++){
        threads.emplace_back(std::thread([](){Singleton::create_instance();}));
    }
    for(auto& t : threads){ 
        if(t.joinable()){
            t.join();
        }
    }
}