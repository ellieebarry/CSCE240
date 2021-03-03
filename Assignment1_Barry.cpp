/*
  Copyright [2020] <Copyright Eleanor Barry>
	Eleanor Barry
	September 15, 2020 3:45pm
	This program finds the solutions to a  cryptarithmetic puzzle by using nested for loops.
	There is no user input required. The format of this program is in C++ Standard.
	The program outputs all possible solutions to the puzzle by printing what each corresponding number is for each letter in the solution and printing the addition after that.
*/

#include <iostream>

using namespace std;

int main() {
  cout << "Welcome to cryptarithmetic puzzle Game" << endl;
  cout << "The program solves the puzzle (I + DID + IT = TOO) ";
  cout << "-------------------------" << endl;
  int eqSol = 0;
  for (int i=0; i < 10; i++) {
    for (int d=0; d < 10; d++) {
      for (int t=0; t < 10; t++) {
        for (int o=0; o < 10; o++) {
          if (o != t && o != d && o != i && d != t && t != i && d != i) {
            int first = i;
            int second = (d*100) + (i*10) + d;
            int third = (i*10) + t;
            int problem = first + second + third;
            int solution = (t*100) + (o*10) + o;
            // if the sides are equal then print values of each
            if (problem == solution) {
              eqSol++;
              cout << "The set of values that satisfy the equation = "
              << eqSol << endl;
              cout << "The values of the letters are :" << endl;
              cout << "T = " << t << endl;
              cout << "I = " << i << endl;
              cout << "D = " << d << endl;
              cout << "O = " << o << endl;
              cout << "The number are " << first << " " << second
              << " " << third << " " << solution;
              cout << "-------------------------" << endl;
            }  // end if equal
          }  // end if not same numbers
        }  // end o for
      }  // end t for
    }  // end d for
  }  // end i for
  return 0;
}
