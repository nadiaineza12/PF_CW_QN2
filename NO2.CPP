#include <iostream>
using namespace std;

// Function to print divisors in decreasing order
void printDivisors(int num) {
    cout << "Divisors of " << num << " in decreasing order:" << endl;
    for (int i = num; i >= 1; --i) {
        if (num % i == 0) {
            cout << i << endl;
        }
    }
}

int main() {
    int num;
    char choice;

    cout << "This program is designed to exhibit the positive divisors of positive integers supplied by you." << endl;
    cout << "The program will repeatedly prompt you to enter a positive integer. Each time you enter a positive integer," << endl;
    cout << "the program will print all the divisors of your integer in a column and in decreasing order." << endl;

    do {
        cout << "Please enter a positive integer: ";
        while (!(cin >> num) || num <= 0) {
            cout << num << " is not a positive integer." << endl;
            cout << "Please enter a positive integer: ";
            cin.clear();  // Clear the error flag
            cin.ignore(10000, '\n');  // Ignore the remaining input
        }

        printDivisors(num);

        // Ask the user if they want to enter another integer
        cout << "Would you like to see the divisors of another integer (Y/N)? ";
        cin >> choice;

        // Validate the input for 'Y' or 'N'
        while (choice != 'Y' && choice != 'y' && choice != 'N' && choice != 'n') {
            cout << "Please respond with Y (or y) for yes and N (or n) for no." << endl;
            cout << "Would you like to see the divisors of another integer (Y/N)? ";
            cin >> choice;
        }

    } while (choice == 'Y' || choice == 'y');

    cout << "Program terminated." << endl;
    return 0;
}
