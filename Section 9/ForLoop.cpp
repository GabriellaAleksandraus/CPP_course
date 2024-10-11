#include <iostream>

using namespace std;

int main() {

    int sum {};

    for (int i = 1; i <= 15; i = i + 2) {
        cout << i << endl;
        sum = sum + i;
        cout << sum << endl;
    }

}
