#include <iostream>

using namespace std;

class Parent {
public:
   int _value;

   Parent(int value)
      : _value(value) {}

   Parent()
      : _value(0) {}
};

class ChildA : public Parent {
public:
   int _valueA;

   ChildA(int value, int valueA)
      : Parent(value), _valueA(valueA) {}

   ChildA()
      : _valueA(0) {}
};

class ChildB : public Parent {
public:
   int _valueB;

   ChildB(int value, int valueB)
      : Parent(value), _valueB(valueB) {}

   ChildB()
      : _valueB(0) {}
};

int main() {
   Parent parent(100);

   ChildA childA(200, 300);
   ChildB childB(400, 500);




   return 0;
}
