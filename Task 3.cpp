#include <iostream>
using namespace std;

int main(){
  int number;
cout << "please enter a number you want the multiplication of: " << endl;
cin >> number;

  for (int i = 1; i<=10; i++){
    cout << number << " x " << i << " = " << number * i << endl;  
  }

  return 0;
}
