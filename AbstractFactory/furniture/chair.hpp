#ifndef CHAIR_HPP
#define CHAIR_HPP

class Chair{
    public:
        virtual bool has_legs() = 0;
        virtual void sit_on() = 0;
    private:
        int leg_count;
};

#endif //CHAIR_HPP