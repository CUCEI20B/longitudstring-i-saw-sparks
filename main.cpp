#include <iostream>
#include <string>

int main() {
    std::string cadena;

    getline(std::cin, cadena);
    std::cout<<cadena.size()<<std::endl;


    return 0;
}