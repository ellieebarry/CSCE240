/* Eleanor Barry
* 30 September 2020 4:05pm
* This file uses myfunction.h and myfunction.cpp to find the perimeter of four different shapes based on the lengths the user enters. 
* The user inputs an integer between 1-4 to choose what shape they want and then enters integers as the lengths of the sides of shape. The format of this program is C++ standard.
* The output is when the perimeter function is called it prints the perimeter that is calculated.
*/

#include <iostream>
#include "myfunction.h"
using namespace std;


int main() {
  // Prints choices of which shape
  cout << "Welcome to Perimeter Calculator" << endl;
  cout << endl << "To specify which shape, select a number" << endl;
  cout << "1: Trapezoid" << endl;
  cout << "2: Triangle" << endl;
  cout << "3: Rectangle" << endl;
  cout << "4: Square" << endl;
  
  int shape;
  //Takes in the int the user enters to represent the shape they choose
  cin >> shape;
  // Sets variables for sides of shape
  double a;
  double b;
  double c;
  double d;
  double perimeter;
  
  // Trapezoid
  if(shape == 1) {
    cout << "To calculate the perimeter for trapezoid" << endl;
    cout << "Enter the first base ";
    cin >> a; 
    cout << "Enter the second base ";
    cin >> b;
    cout << "Enter the left side ";
    cin >> c;
    cout << "Enter the right side ";
    cin >> d;
    // Calls trapezoid from myfunction.cpp
    trapezoid(a, b, c, d, perimeter);
  // Triangle
  } else if(shape == 2) {
    cout << "To calculate the perimeter for triangle" << endl;
    cout << "Enter the first side "; 
    cin >> a;
    cout << "Enter the second side ";
    cin >> b;
    cout << "Enter the third side ";
    cin >> c;
    // Calls triangle from myfunction.cpp
    triangle(a, b, c, perimeter);
  // Reactangle
  } else if(shape == 3) {
    cout << "To calculate the perimeter for rectangle" << endl;
    cout << "Enter the first side ";
    cin >> a;
    cout << "Enter the second side ";
    cin >> b;
    // Calls rectangle from myfunction.cpp
    rectangle(a, b, perimeter);
  // Square
  } else if(shape == 4) {
  cout << "To calculate the perimeter for square" << endl;
    cout << "Enter the length of one side ";
    cin >> a;
    // Calls square from myfunction.cpp
    square(a, perimeter);
  // Not valid aka not 1, 2, 3, or 4
  } else {
    cout << "Not Valid" << endl;
  }
  
  return 0;
}
