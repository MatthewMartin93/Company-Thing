#include <iostream>
#include "communications.h"
#include "discounts.h"
#include <string>
std::string address;
std::string discountCode;
int discount;
int main(){
    std::cout << "Welcome to Shane" << std::endl;
    greeting();
    std::cout << "What is your address?" << std::endl;
    std::cin.ignore();
    getline(std::cin, address);
    addressFormat(address);
    std::cout << address << std::endl;
    product();
    std::cout << "Please enter your discount code" << std::endl;
    std::cin >> discountCode;
    shane(discount, discountCode);
    henry(discount, discountCode);
    pricken(discount, discountCode);
    std::cout << "You saved " << discount << "%" << std::endl;
}
