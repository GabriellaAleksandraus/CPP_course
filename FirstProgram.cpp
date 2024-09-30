#include <iostream>

int main(){
    std::cout << "Hello World!" << std::endl;
    int a = 10;
    int* b = &a;
    *b += 1;
    std::cout << "Hello World!" << std::endl;

    return 0;
}