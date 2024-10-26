#include <iostream>
using namespace std;

int main() {
    cout << "Please enter an even number between 1 to 20: " << endl;

    for (int i = 1; i <= 20; ++i) {
        if (i % 2 == 0) {
          cout << i << endl;
        }
    }

    return 0;
}
