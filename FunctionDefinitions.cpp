#include <iostream>

const double pi {3.14159};

double calc_area_circle(double radius) {
    return pi * radius * radius;
}

void area_circle() {
    double radius{};
    std::cout << "\nEnter the radius of the circle: ";
    std::cin >> radius;

    std::cout << "The area of a circle with radius " << radius << " is " << calc_area_circle(radius) << std::endl;

}



int main() {

    area_circle();
    area_circle();
    area_circle();
    area_circle();


    return 0;
}