#include <iostream>
using namespace std;

int main() {
    int Order_of_Subjects;
    
    cout << "Please enter the total number of subjects which you want to see the result of: ";
    cin >> Order_of_Subjects;

    if   (Order_of_Subjects <= 0) {
        cout << "The number of subjects should be greater than 0. " << endl;
        return 0;
    }

    for (int i = 1; i <= Order_of_Subjects; ++i) {
        int marks;

        cout << "Please enter your marks in " << i << " subject: (1-100) ";
        cin >> marks;
        
        char Subjects_Grade;
        if (marks >= 90) {
            Subjects_Grade = 'A';
        } else if (marks >= 75) {
            Subjects_Grade = 'B';
        } else if (marks >= 50) {
            Subjects_Grade = 'C';
        } else {
            Subjects_Grade = 'F';
        }

        cout << "In the subject " << i << " You have got: " << Subjects_Grade << endl;
    }

    return 0;
}
