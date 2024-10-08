#include <iostream>

using namespace std;

int main() {

    int counter {10};
    int result {0};

    // cout << "Counter: " << counter << endl;

    // counter = counter + 1;
    // cout << "Counter: " << counter << endl;

    // counter ++;
    // cout << "Counter: " << counter << endl;

    // ++counter;
    // cout << "Counter: " << counter << endl;

    // cout << "Counter: " << counter << endl;

    // result = ++counter; //same as counter = counter + 1 and result = counter
    // cout << "Counter: " << counter << endl;
    // cout << "Result: " << result << endl;

    // cout << "Counter: " << counter << endl;

    // result = counter++; //same as result = counter and counter = counter + 1
    // cout << "Counter: " << counter << endl;
    // cout << "Result: " << result << endl;

    cout << "Counter: " << counter << endl;

    result = counter++ + 10;
    cout << "Counter: " << counter << endl;
    cout << "Result: " << result << endl;

    counter = 10;

    result = ++counter + 10;
    cout << "Counter: " << counter << endl;
    cout << "Result: " << result << endl;



}