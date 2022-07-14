#include <iostream>
using namespace std;
// getters and setters are normal 
// functions
// they have standard naming conventions

class Rectangle {
  private:
    int length;
    int width;
  public:
    Rectangle(); // default constructor
    Rectangle(int plength, int pwidth); // 
   //overloaded constructor
   // we have special method called destructor
   // automatically called when you destroy 
   // or remove an object
    ~Rectangle();
    //1. destructor has a tidle char and name of class
    //2. destructors have only ones without parameters
    //3. destructors are automatically executed
    // when an object is removed
    void setLength(int len);
    void setWidth(int wi);
    // I can use a getter to retrive values
    // of a property
    int getLength(); // getter
    int getWidth(); // getter
    int calcArea();
};
Rectangle::~Rectangle() {
    cout << "Destructor Called " << endl;
}
Rectangle::Rectangle() {
   length = 0;
   width = 0;
   cout << "Default constructor called " << endl;
}
Rectangle::Rectangle(int plength, int pwidth) {
   length = plength;
   width = pwidth;
   cout << "Overloaded Rectangle constructor called " << endl;
}
// Setters
// private:

//.  dataType property
// void setProperty(dataType var) {
//      property = var;
//}
void Rectangle::setLength(int len) {
  if (len > 0)
    length = len;
  else
    length = 10;
}
void Rectangle::setWidth(int wi) {
  if (wi > 0)
      width = wi;
  else
      width = 10;
}
// can you see why length and width
// are not parameters below
int Rectangle::calcArea() {
  return length * width;
}
int Rectangle::getLength() {
  return length;
}
int Rectangle::getWidth() {
   return width;
}

int main() {
  // outside the rectangle class

  // r1 [10,20]
  // r2 [ 5,10]
   int no = 50;
   {
     int a = 34;
     cout << a << endl;
   } // a does not exist beyond 
  
   cout << no << endl;
   {
     Rectangle r1;
     cout << "R1 Area " << r1.calcArea() <<endl;
   }
   cout << "Rectangle 1 has no meaning here" << endl;
   Rectangle r2(100, 50);
   cout << "R2 Area " << r2.calcArea() << endl;
   cout << r2.getLength() << endl;
   return 0;
}