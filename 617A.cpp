#include <iostream>

int main(){
    int x, s = 0;
    std::cin >> x;
    
    s = x/5;

    if(x % 5 != 0){
        s += 1;
    }

    std::cout << s;

    return 0;
}