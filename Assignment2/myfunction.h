/* Eleanor Barry
* 30 September 2020 4:05pm
* This file declares the functions in myfunction.cpp and is called by main.cpp 
* The user does not input anything directly to this program but the user input from main.cpp for the double variables is used for the functions.
* There is no output from this program.
*/

#ifndef MYFUNCTION_H
#define MYFUNCTION_H

// Declaring the functions from myfunction.cpp
void trapezoid(double a, double b, double c, double d, double &perimeter);
void triangle(double a, double b, double c, double &perimeter);
void rectangle(double a, double b, double &perimeter);
void square(double a, double &perimeter);

#endif
