/*
Charles Baker, Programming Fundamentals I: COSC-1436-57001
IDE: Replit
Summary: Take an integer representing pennies as input, calculate the conversion to dollars, quarters, dimes, and nickels. Output the conversion amounts as well as remaining pennies.
*/

#include <iostream>
using namespace std;

int main() {
  // Variable Declaration
  int dollars;
  int quarters;
  int dimes;
  int nickels;
  int pennies;

  // Input
  cout << "Please enter the number of pennies you have: ";
  cin >> pennies;

  // Process
  // Convert dollars
  dollars = pennies / 100;
  // mod to determine leftover pennies
  pennies = pennies % 100;
  // Convert quarters
  quarters = pennies / 25;
  // mod to determine leftover pennies
  pennies = pennies % 25;
  // Convert dimes
  dimes = pennies / 10;
  // mod
  pennies = pennies % 10;
  // Convert nickels
  nickels = pennies / 5;
  // mod
  pennies = pennies % 5;

  // Output
  cout << "Dollars = " << dollars << endl; 
  cout << "Quarters = " << quarters << endl;
  cout << "Dimes = " << dimes << endl;
  cout << "Nickels = " << nickels<< endl;
  cout << "Pennies = " << pennies << endl;
}