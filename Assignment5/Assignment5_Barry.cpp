/* 
* Eleanor Barry
* 12:15pm November 12, 2020
* This program takes in an input file and an output file and checks if opening them was sucessful. The program also prints a count of the differences between the two files.
* The program inputs an input file stream object.
* The program outputs the corrected file as an output file stream object and outputs the count of the differences between the files.
*/


#include <iostream>
#include <fstream>
using namespace std;

// checks if opening the files was sucessful
void check(ifstream& i, ofstream& o) {
  if (i.is_open()) {
    // continue
  } else {
    cout << "The stream connection to the input file was not sucessful" << endl;
  }
  if (o.is_open()) {
  // continue
  } else {
    cout << "The stream connection to output file was not sucessful" << endl;
  }
}

int main() {
  // input file stream object
  ifstream inputFile;
  char input[400];
  cout << "Enter input file:" << endl;;
  cin >> input;
  // output file stream object
  ofstream outputFile;
  char output[400];
  cout << "Enter output file:" << endl;
  cin >> output;
  // open the files and check if it was sucessful
  inputFile.open(input);
  outputFile.open(output);
  check(inputFile, outputFile);
  // counter for corrections
  int count = 0;
  // variables to fix cout errors
  string rCout = "cout>>";
  string rCout2 = "cout>>endl;";
  string nCout = "cout<<";
  string strTemp;
  // fixes cout errors
  while(inputFile >> strTemp) {
    if(strTemp == rCout || strTemp == rCout2){
      strTemp = nCout;
      count++;
    }
    strTemp += "\n";
    outputFile << strTemp;
  }
  // variables to fix cin errors
  string rCin = "cin>>";
  string nCin = "cin<<";
  string strTemp2;
  // fixes cin errors
  while(inputFile >> strTemp2) {
    if(strTemp2 == rCin){
      strTemp2 = nCin;
      count++;
    }
    strTemp2 += "\n";
    outputFile << strTemp2;
  }
  // close the files
  inputFile.close();
  outputFile.close();
  cout << "The number of corrections in the file:" <<  count << endl;
	return 0;
} 


/* If blank symbols between any occurance of cin and << and cout and <<:
 I would have to create two while functions to look for cin and cout that didn't have spaces between the word "cin" or "cout" and the symbol"<<" or ">>" and replace them with the word then a space then the correct symbols.
*/
