#include <iostream>
#include <string>

int main (){
    std::string word; 
    std::cin >> word;

    int n = word.size();

    for(int i=0; i < n; i++){
        char s = tolower(word[i]);
        if (s=='a' || s=='o' || s=='y' || s=='e' || s=='u' || s=='i'){
            continue;
        } else{
            std::cout << "." << s;
        }
    }

    return 0;
}