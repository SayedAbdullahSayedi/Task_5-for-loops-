#include <iostream>
using namespace std;

int main() {
    int number;

    cout << "Please enter a positive number? ";
    cin >> number;
    
    if (number < 1) {
        cout << "Please enter a positive integer greater than 0." << endl;
        return 1;
    }

    cout << "Cubes numbers from one to " << number << ":" << endl;

    for (int i = 1; i <= number; ++i) {
        int cube = i * i * i;
        cout << "Cube of " << i << " is: " << cube << endl;
    }

    return 0;
}
