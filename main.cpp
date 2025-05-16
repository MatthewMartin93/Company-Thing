#include <iostream>
#include "communications.h"
#include <string>
std::string address;
int main(){
    std::cout << "Welcome to Shane" << std::endl;
    greeting();
    std::cout << "What is your address?" << std::endl;
    std::cin.ignore();
    getline(std::cin, address);
    addressFormat(address);
    std::cout << address << std::endl;
}
