#include <iostream>

int main (){
    int a, b;
    int ans = 0;
    std::cin >> a >> b;

    for (int i=0; i < b; i++){
        if (a<=b) {
            a *= 3;
            b *= 2;
            ans++;
        }
    }

    std::cout << ans;

    return 0;
}