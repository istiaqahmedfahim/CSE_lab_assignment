#include <iostream>
using namespace std;

// Base class
class MyClass {
  public:
    void myFunction() {
      cout << "Some content in parent class.\n" ;
    }
};

// Another base class
class MyOtherClass {
  public:
    void myOtherFunction() {
      cout << "Some content in another class.\n" ;
    }
};

// Derived class
class MyChildClass: public MyClass, public MyOtherClass { //Created the multilevel derived class by using two comma-separated class name
};

int main() {
  MyChildClass myObj;//created the object of the derived class
  myObj.myFunction();
  myObj.myOtherFunction();
  return 0;
}
