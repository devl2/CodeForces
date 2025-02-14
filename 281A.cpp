#include <iostream>
#include <string>

int main (){
    std::string w;
    std::cin>>w;

    w[0] = toupper(w[0]);
    std::cout << w;

    return 0;
}