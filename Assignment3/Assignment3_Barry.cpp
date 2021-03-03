/* Eleanor Barry
* 9:20am 4 November 2020
* The program creates a burger and calculates the price of the burger.
* The inputs of the program are the type of burger, the size of the burger, and the sauce for the burger.
* The outputs of the program are the text description of the burger and the price of the burger.
*/

#include <iostream>

using namespace std;


class Burger {
  // variables for the class
  string burgerType;
  int size;
  string sauceType;
  public:
    // constructor
    Burger(string burgerTypee, int sizee, string sauceTypee) {
      burgerType = burgerTypee;
      size = sizee;
      sauceType = sauceTypee;
    }
   // burger type accessor
   string getBurgerType(){
     return burgerType;
   }
   // burger type mutator
   void setBurgerType(string burgerTypee) {
     burgerType = burgerTypee;
   }
   // size accessor
   int getSize() {
     return size;
   }
   // size mutator
   void setSize( int sizee) {
     size = sizee;
   }
   // sauce type accessor
   string getSauceType() {
     return sauceType;
   }
   // sauce type mutator
   void setSauceType(string sauceTypee) {
     sauceType = sauceTypee;
   }
   // textual description of the burger
   void outputDescription() {
     cout << "**** My order ****" << endl;
     cout << "Type: " << burgerType << endl;
     cout << "Size: " << size << endl;
     cout << "Sauce: " << sauceType << endl;
     cout << "--------------------" << endl;
   }
   // computes cost of burger
   double computePrice() {
     double sauce;
     double type;
     // sauce price
     if (sauceType == "Barbeque" || sauceType == "Cranberry") {
       sauce = 0.75;
     } else if (sauceType == "Buffalo") {
       sauce = 1.5;
     }
     // size and type price
     if (burgerType == "Cheddar" || burgerType == "Classic") {
       if (size == 4){
         type = 2.0;
       } else {
         type = 4.0;
       }
     } else if (burgerType == "Slider" || burgerType == "Veggie") {
       if (size == 4) {
         type = 3.0;
       } else {
         type = 5.0;
       }
     } else if (burgerType == "Salmon") {
       if (size == 4) {
         type = 4.0;
       } else {
         type = 6.0;
       }
     }
     // computes price of burger
     return sauce + type;
   }
};


int main() {
  // variables
  string burger;
  int size;
  string maybeSauce;
  string sauce;
  cout << "What type of burger would you like (Cheddar, Classic, Slider, Veggie, or Salmon)?" << endl;
  cin >> burger;
  cout << "What size (4 or 6)oz?" << endl;
  cin >> size;
  cout << "Would you like sauce. y or n?" << endl;
  cin >> maybeSauce;
  if( maybeSauce == "y") {
    cout << "What type of sauce would you like (Barbeque, Cranberry, or Buffalo)?" << endl;
    cin >> sauce;
  } else {
    sauce = "None";
  }
  Burger burger1(burger, size, sauce);
  burger1.outputDescription();
  cout << "Total amount = $" << burger1.computePrice() << endl;
  cout << "Enjoy your burger!" << endl;
  
  return 0;
}

