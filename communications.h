#pragma once
#include <string>
std::string name;
std::string products;
void greeting(){
    std::cout << "Whats your name?" << std::endl;
    std::cin >> name;
    std::cout << "Hello " << name << ", welcome to Shane" << std::endl;
}
void addressFormat(std::string &x){
    for (char &y : x){
        y = toupper(y);
    }
}
void product(){
    std::cout << "What product do you want?" << std::endl;
    std::cin >> products;
    std::cout << "We hope you enjoy your " << products << "." << std::endl;
}
