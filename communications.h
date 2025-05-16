#pragma once
#include <string>
std::string name;
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
