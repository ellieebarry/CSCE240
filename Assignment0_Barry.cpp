/*
	Eleanor Barry
	August 29, 2020
	This program changes hours to seconds, minutes, hours, and days.
	The input required is an integer that represents an amount of hours. The format of this program is in C++ Standard.
	The output of the program is the hours written in the form of seconds, minutes, hours, and days.
*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int hours = 0;
  // Prints out statement and takes in user input
  cout << "Enter length of time in hours" << endl;
  cin >> hours;
  
  // Creates variables from the user input
  int minutes = hours * 60;
  int seconds = minutes * 60;
  double days = hours / 24.0;
  int roundedDays = round(days);
  
  // Prints out the variables created by user input
  cout << "Hours = " << hours << endl;
  cout << "Minutes = " << minutes << endl;
  cout << "Seconds = " << seconds << endl;
  cout << "Days = " << days << endl;
  cout << "Rounded number of days = " << roundedDays << endl;
  
	return 0;
}
