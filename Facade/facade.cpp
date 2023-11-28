#ifndef FACADE_HPP
#define FACADE_HPP

#include <iostream>
#include <string>

class ProductInventory{
    public:
        bool is_available(const std::string product){
            std::cout << "Checking for product " << product <<std::endl;
            return true;
        }
};

class UserAuthentication{
    public:
        bool user_authentication(const std::string user, std::string password){
            std::cout << "Authenticating  user " << user << std::endl;
            return true;
        }
};

class PaymentProcessor{
    public:
        bool process_payment(const double amount){
            std::cout << "Processsing payment of amount " << amount << std::endl;
            return true;
        }
};

class ShoppingCartFacade{
    public:
        bool checkout(std::string product, std::string user, std::string password, double amount){
            if(product_inventory.is_available(product) && user_authentication.user_authentication(user, password)){
                std::cout << "Product added to cart: " << product << std::endl;
                std::cout << "User authentication: " << user << std::endl;
                return payment_processor.process_payment(amount);
            }
            else{
                std::cout << "Unable to process checkout" << std::endl;
                return false;

            }
        }
    private:
        ProductInventory product_inventory;
        UserAuthentication user_authentication;
        PaymentProcessor payment_processor;
};


#endif //FACADE_HPP