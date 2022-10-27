#include <iostream>
using namespace std;

int main() {

  int firstNumber, secondNumber, sum;
    
  cout << "Enter two integers: ";
  cin >> firstNumber >> secondNumber;

  // sum of two numbers in stored in variable sumOfTwoNumbers
  //Add those
  sum = firstNumber + secondNumber;

  // prints sum of the two given numbers from users
  cout << firstNumber << " + " <<  secondNumber << "equals " << sum;     

  return 0;
}
