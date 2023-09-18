
class Singleton{
    private:
        Singleton();
        static Singleton* instance;
    public:
        static Singleton* create_instance();

        Singleton(Singleton const&) = delete;
        Singleton operator =(Singleton const&) = delete;
};


Singleton* Singleton::instance = nullptr;