#include <iostream>

int main(){
    int n, t;
    std::string s;
    std::cin >> n;
    std::cin >> s;

    for(int i = 0; i < n; i++){
        if(s[i] == s[i+1]){
            t++;
        }
    }

    std::cout << t;
    
    return 0;
}