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

   parent = childA;   // 자식타입의 객체를 부모타입의 객체에 대입할 수 있습니다.
                  // 자식타입의 객체의 값을 부모타입의 객체에 대입하는 경우 값의 유실이 발생을 합니다.
                  // 객체타입을 대입할때는 참조타입이나 포인터 타입으로 대입을 합니다.
                  // 자식타입의 객체를 부모타입의 참조형 변수나 포인터 형변수에 대입을 하는 것을
                  // UpCasting(업캐스팅)이라고 합니다.

   childA = parent; // 부모타입의 객체를 자식 타입의 객체에 대입할수 없습니다.
               // 부모타입의 객체를 자식타입의 참조형변수, 포인터 변수에 대입하는 것을
               // DownCasting(다운캐스팅)이라고 합니다.
               // 일반적인 경우의 DownCasting은 허용이 되지 않습니다.

   Parent& refParent = childA; // 업캐스팅

   refParent._value = 200;

   // refParent는 Parent&  타입이기 때문에 childA 객체의 Parent 영역만 접근이 가능합니다.

   cout << "refParent._value = " << refParent._value << endl;

   // 일반적인 경우에는 다운캐스팅이 허용되지 않지만 이 경우에는 다운캐스팅이 허용이됩니다.
   // ChildA타입을 Parent& 타입으로 대입받았다가 다시 ChildA 참조타입으로 대입하는 경우에는 
   // 다운 캐스팅이 허용이 됩니다.
   ChildA& refChildA = (ChildA&)refParent;  // 이 경우에는 다운 캐스팅이 허용이 됩니다.


   cout << "refChildA._value = " << refChildA._value << endl;
   cout << "refChildA._valueA = " << refChildA._valueA << endl;

   // 포인터타입

   Parent* pParent;   // Parent타입 주소값을 저장하는 변수

   pParent = &childA; // 업캐스팅

   pParent->_value;
   // pParent 포인터형 변수로 접근할 수 있는 것은 부모의 영역만 접근이 가능합니다.
   cout << "pParent->_value = " << pParent->_value << endl;

   ChildA* pChildA = (ChildA*)pParent;   // 다운캐스팅

   cout << "ChildA->_value = " << pChildA->_value << endl;
   cout << "ChildA->_valueA = " << pChildA->_valueA << endl;


   return 0;
}
