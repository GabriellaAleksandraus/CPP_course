#include <iostream>

using namespace std;

int main() {

    int num1 {200};
    int num2 {100};

    cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;

    int result {0};
    
    result = num1 + num2;

    cout << num1 << " + " << num2 << " = " << result << endl;

    result = num2 / num1; //integer division (the numbers after the . gets crossed out)

    cout << num1 << " / " << num2 << " = " << result << endl;

    cout << 5.0/10.0 << endl;

    

}