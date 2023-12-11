#include "CoR.hpp"

Handler::HandlerPtr Concrete_Handler_A::set_next_handler(Handler::HandlerPtr handler){
    if(handler == next_handler){
        throw std::exception{};
    }
    next_handler = std::make_unique<Handler>(handler);
    return next_handler;
}

std::string Concrete_Handler_A::handle_request(std::string& request){
    if(request == "A"){
        return "A type handler is done";
    }
    else{
        return next_handler->handle_request(request);
    }
}

std::string Concrete_Handler_B::handle_request(std::string& request){
    if(request == "B"){
        return "B type handler is done";
    }
    else{
        return next_handler->handle_request(request);
    }
}