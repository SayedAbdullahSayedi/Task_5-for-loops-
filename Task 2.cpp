#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Please enter a number? ";
    cin >> n;

    if (n < 1) {
        cout << "The number is less than 1, please enter a greater number" << endl;
        return 1;
    }

    int sum = (n * (n + 1)) / 2;

    cout << "The sum of the first " << n << " natural numbers is: " << sum << endl;

    return 0;
}
