#include <iostream>

using namespace std;

int main() {

    cout << "Enter the width of the room: ";
    int room_width {0};
    cin >> room_width;

    cout << "Enter the lenght of the room: ";
    int room_lenght {0};
    cin >> room_lenght;

    cout << "The area of the room is: " << room_width * room_lenght << " square meters" << endl;

    return 0;
}