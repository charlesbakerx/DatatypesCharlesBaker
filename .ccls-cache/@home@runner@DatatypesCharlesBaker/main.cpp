/*
Charles Baker, Programming Fundamentals I: COSC-1436-57001
IDE: Replit
Summary: Take an integer representing pennies as input, calculate the conversion to dollars, quarters, dimes, and nickels. Output the conversion amounts as well as remaining pennies.
*/

#include <iostream>
using namespace std;

// Constants
const int DOLLAR = 100;
const int QUARTER = 25;
const int DIME = 10;
const int NICKEL = 5;


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
  dollars = pennies / DOLLAR;
  // mod to determine leftover pennies
  pennies = pennies % DOLLAR;
  // Convert quarters
  quarters = pennies / QUARTER;
  // mod to determine leftover pennies
  pennies = pennies % QUARTER;
  // Convert dimes
  dimes = pennies / DIME;
  // mod
  pennies = pennies % DIME;
  // Convert nickels
  nickels = pennies / NICKEL;
  // mod
  pennies = pennies % NICKEL;

  // Output
  cout << "Dollars = " << dollars << endl; 
  cout << "Quarters = " << quarters << endl;
  cout << "Dimes = " << dimes << endl;
  cout << "Nickels = " << nickels<< endl;
  cout << "Pennies = " << pennies << endl;
  
}