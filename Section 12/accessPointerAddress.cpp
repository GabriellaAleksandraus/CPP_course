#include <iostream>

int main() {

int *p;

std::cout <<"Value of p is: " << p << std::endl; //garbage

std::cout <<"Address of p is: " << &p << std::endl;

//std::cout <<"Size of p is: " << sizeof p << std::endl; // 4

p = nullptr; //set p to point nowhere

std::cout << "Value of p is: " << p << std::endl;


}