/* 
* Eleanor Barry
* 10:35pm November 24, 2020
* This program uses an input file and creates a queue with the user inputted amount of items. The program then returns the price ofr each item and hte total price for the items in the queue.
* The user inputs the amount of items, the item names, and the amount of each item.
* The program outputs the price of each item and the total price of all items purchased.
*/


#include <iostream> 
#include <fstream>
using namespace std; 
  
struct QNode { 
    string name; 
    double price;
    int count;
    QNode* next; 
    QNode(string n, double p, int c) { 
        name = n; 
        price = p;
        count = c;
        next = NULL; 
    } 
}; 

  
class Queue {
    public: 
     QNode *front;
     QNode *rear;
     // default constructor
     Queue() { 
         front = NULL;
         rear = NULL; 
     }
     ~Queue() { 
       // If queue is empty, return NULL.
       bool exists = true;
       if (front == NULL)
         exists = false;
       while (exists) { 
         // if front is NULL so is rear
         if (front == NULL) {
           rear = NULL; 
           break;
         }
         QNode* temp = front; 
         front = front->next; 
         delete temp; // deletes node
       }
     }
     // function used to insert a new node
     void enQueue(string name, double price, int count) {
         // creates new node
         QNode* temp = new QNode(name, price, count); 
         // if queue empty
         if (rear == NULL) { 
             front = rear = temp; 
             return; 
         } 
         // add new node at end of queue and changes rear 
         rear->next = temp; 
         rear = temp; 
     } 
     // function used to delete a node
     void deQueue() { 
         // If queue is empty, return NULL 
         if (front == NULL) {
             return;
         } 
         QNode* temp = front; 
         front = front->next; 
         // if front is NULL so is rear
         if (front == NULL) {
             rear = NULL; 
         }
         delete temp; // deletes node
     }
     // prints the queue contents
     void display() {
         double calc;
         QNode* temp = front;
         bool exists = true;
         if(temp== NULL)
           exists = false;
 			while(exists) {
        calc = temp->count * temp->price;
 				cout << temp->name << ": $" << calc << " for " << temp->count << " " << temp->name << endl;
 				temp = temp->next;
         if(temp == NULL)
           exists = false;
      }
    }
     // friend function
     friend double calculate(Queue q);
}; 

  
double calculate(Queue calc) {
  double total = 0.0;
  while(calc.front != NULL) {
    total = total + (calc.front->count * calc.front->price);
    calc.deQueue();
  }
  return total;
}


int main(int argc, char* argv[]) { 
  Queue q; 
  int itemsNum = std::atoi(argv[1]);
  string name;
  int count;
  double price;
  double totalPrice;
  int items = 1;
  cout << endl;
  cout << "Number of items are: " << itemsNum << endl;
  cout << endl;
  while (items <= itemsNum) {
    cout << "Enter item " << items << ": " << endl;
    cin >> name;
    cout << "Count: " << endl;
    cin >> count;
    // price
    ifstream file("prices.txt");
    double price;
    string line;
    while(!file.eof()) {
      getline(file, line);
      if(line.find(name) != string::npos) {
        price = stod(&line[line.length() - 3]);
      }
    }
    cout << "Price for each: $" << price << endl; 
    q.enQueue(name, price, count);
    items++;
    cout << endl;
  }
  cout << "Your items are:" << endl;
  q.display();
  cout << endl;
  totalPrice = calculate(q);
  cout << "Your total is: " << totalPrice << endl;
  cout << "Please take your new items!" <<endl;
  cout << endl;
  cout << "Thank you!" << endl;
}
