#ifndef COR_HPP
#define COR_HPP

#include <memory>
#include <string>


class Handler{
    public:
        using HandlerPtr = std::unique_ptr<Handler>;
    public:
        virtual std::string handle_request(std::string& request) = 0;
        virtual HandlerPtr set_next_handler(HandlerPtr) = 0;
        virtual ~Handler(){}
};

class Concrete_Handler_A : public Handler{
    public:
        std::string handle_request(std::string& request) override;
        Handler::HandlerPtr set_next_handler(HandlerPtr handler) override;
    private:
        HandlerPtr next_handler;
};

class Concrete_Handler_B : public Handler{
    public:
        std::string handle_request(std::string& request) override;
        Handler::HandlerPtr set_next_handler(HandlerPtr handler) override;
    private:
        HandlerPtr next_handler;
};


#endif //COR_HPP