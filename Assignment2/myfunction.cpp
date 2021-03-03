/* Eleanor Barry
* 30 September 2020 4:05pm
* This file takes in the variables entered by the user in main.cpp and uses arithmetic to find the perimeter. Then it prints the perimeter of the shape.
* The user inputs integers for the variables in main.cpp and those variables are input into the functions in this program.
* The output of each function is the printed perimeter, but the function itself if void so the perimeter is only printed.
*/

#include <iostream>
using namespace std;


double* perm;
// Finds perimeter of the trapezoid
void trapezoid(double a, double b, double c, double d, double &perimeter) {
  perimeter = a + b + c + d;
  perm = &perimeter;
  cout << endl << "The perimeter is " << perimeter;
}
//Finds perimeter of the triangle
void triangle(double a, double b, double c, double &perimeter) {
  perimeter = a + b + c;
  perm = &perimeter;
  cout << endl << "The perimeter is " << perimeter;
}
// Finds perimeter of the rectangle
void rectangle(double a, double b, double &perimeter) {
  perimeter =  2 * (a + b);
  perm = &perimeter;
  cout << endl << "The perimeter is " << perimeter;
}
//Finds perimeter of the square
void square(double a, double &perimeter) {
  perimeter = a * 4;
  perm = &perimeter;
  cout << endl << "The perimeter is " << perimeter << endl;
}
