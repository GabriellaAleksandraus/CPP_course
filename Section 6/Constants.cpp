#include <iostream>

using namespace std;

int main() {
    cout << "Hello, welcome to Frank's Carpet Cleaning Service" << endl;
    cout << "\nHow many rooms would you like cleaned? ";

    int number_of_rooms {0};
    cin >> number_of_rooms;

    const double price_per_room {30};

    cout << "\nEstimate for carpet cleaning service" << endl;
    cout << "Number of rooms: " << number_of_rooms << endl;
    cout << "Price per room: " << price_per_room << endl;
    cout << "Cost: " << price_per_room * number_of_rooms << endl;
    cout << "Tax: " << price_per_room * number_of_rooms * 0.06 << endl;
    cout << "============================================" << endl;
    cout << "Total estimate cost: " << (price_per_room * number_of_rooms) + (price_per_room * number_of_rooms * 0.06) << endl;
    cout << "This estimate is valid for " << 30 << " days" << endl;

    cout << endl;

    return 0;
}