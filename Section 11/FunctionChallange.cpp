#include <iostream>
#include <vector>
#include <algorithm>

void displayMenu() {

    std::cout << "P - Print numbers" << std::endl;
    std::cout << "A - Add a number" << std::endl;
    std::cout << "M - Display mean of the numbers" << std::endl;
    std::cout << "S - Display the smallest number" << std::endl;
    std::cout << "L - Display the largest number" << std::endl;
    std::cout << "Q - Quit" << std::endl;
    std::cout << "\nEnter you choice: " << std::endl;

}

double calcMean(const std::vector<int>& collectionOfIntegers) {
    double sum{};
    
    for (int number : collectionOfIntegers) {
        sum += number ;
    }
    double mean = sum / collectionOfIntegers.size();

    return mean;

}

char parseSelection(char selection) {

    char selectionUpper = toupper(selection);
    //std::cout << selectionUpper;
    return selectionUpper;

}

void printNumbers(const std::vector<int>& collectionOfIntegers) {
    if (collectionOfIntegers.empty()) {
        std::cout << "\n[] - the list is empty\n" << std::endl;
    }
    else {
        std::cout << "[ ";
        for (int number : collectionOfIntegers) {
            std::cout << number << " ";
            }
            std::cout << "]\n" << std::endl;
        }

}

void addNumbers(std::vector<int>& collectionOfIntegers, int number) {
    collectionOfIntegers.push_back(number);
    std::cout << number << " added." << std::endl;
}

void displayMean(const std::vector<int>& collectionOfIntegers) {

    if (collectionOfIntegers.empty()) {
        std::cout << "\nUnable to calculate the mean. The list is empty\n" << std::endl;
    }
    else {
        std::cout << "\nMean: " << calcMean(collectionOfIntegers) << "\n" << std::endl;
    }
}

void displaySmallestNumber(const std::vector<int>& collectionOfIntegers) {
    if (collectionOfIntegers.empty()) {
        std::cout << "\nThe list is empty\n" << std::endl;
    }
    else {
        auto smallest_number
            = std::min_element(collectionOfIntegers.begin(), collectionOfIntegers.end());

        std::cout << "\nThe smallest number is: " << *smallest_number << "\n" << std::endl;
    }
}

void displayLargestNumber(const std::vector<int>& collectionOfIntegers) {
    if (collectionOfIntegers.empty()) {
        std::cout << "\nThe list is empty\n" << std::endl;
    }
    else {
        auto largest_number
            = std::max_element(collectionOfIntegers.begin(), collectionOfIntegers.end());

        std::cout << "\nThe largest number is: " << *largest_number << "\n" << std::endl;
    }    
}

void quit() {
    std::cout << "Goodbye!"<< std::endl;
    exit(0);    
}




int main() {

    char selection {};
    std::vector <int> collectionOfIntegers{};
    int number{};


    do {

        displayMenu();
        std::cin >> selection;
        selection = parseSelection(selection);

        if (selection == 'P') {
            printNumbers(collectionOfIntegers);
        }
        else if (selection == 'A') {
            std::cin >> number;
            addNumbers(collectionOfIntegers, number);
        }
        else if (selection == 'M') {
            displayMean(collectionOfIntegers);
        }
        else if (selection == 'S') {
            displaySmallestNumber(collectionOfIntegers);
        }
        else if (selection == 'L') {
            displayLargestNumber(collectionOfIntegers);
        }
        else if (selection == 'Q') {
            quit();
        }
        else {
            std::cout << "\nUnknown selection, please try again\n" << std::endl;
        }

    } while (selection != 'Q');

    return 0;

}