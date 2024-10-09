#include <iostream>

using namespace std;

int main() {

    cout << "Write an integer representing the number of cents: " << endl;

    int number_of_cents{};

    cin >> number_of_cents;

    int dollars{};
    int quarters{};
    int dimes{};
    int nickels{};
    int pennies{};
    int the_rest{};

    dollars = number_of_cents / 100;
    the_rest = number_of_cents % 100;

    quarters = the_rest / 25;
    the_rest = the_rest % 25;

    dimes = the_rest / 10;
    the_rest = the_rest % 10;

    nickels = the_rest / 5;
    the_rest = the_rest % 5;

    pennies = the_rest;

    cout << "dollars : " << dollars <<"\nquartes : " << quarters << "\ndimes   : " << dimes << "\nnickels : " << nickels <<"\npennies : " << pennies << endl;

}