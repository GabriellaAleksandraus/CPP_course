#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector <int> test_scores{100, 98, 89};

    cout <<test_scores.at(0) << endl;
    cout <<test_scores.size() << endl;

    cout <<"\nEnter three test scores: ";
    cin >>test_scores.at(0);
    cin >>test_scores.at(1);
    cin >>test_scores.at(2);

    cout <<"\nUpdated test scores: " << endl;
    cout <<test_scores.at(0) << endl;
    cout <<test_scores.at(1) << endl;
    cout <<test_scores.at(2) << endl;



}