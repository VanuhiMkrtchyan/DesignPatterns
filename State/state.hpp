#ifndef STATE_HPP
#define STATE_HPP

class File;

class State{
    public:
        virtual void open(File*) = 0;
        virtual void change(File*) = 0;
        virtual void close(File*) = 0;
};

class Open_State : public State{
    public: 
        void open(File*) override;
        void change(File*) override;
        void close(File*) override;
};

class Change_State : public State{
    public: 
        void open(File*) override;
        void change(File*) override;
        void close(File*) override;
};

class Close_State : public State{
    public: 
        void open(File*) override;
        void change(File*) override;
        void close(File*) override;
};


#endif //STATE_HPP