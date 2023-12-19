#include <iostream>

using namespace std;

int main() {
   int a = 20;
   int b = 30;

   // 참조형변수 refa
   // a변수의 별칭인 refa가 만들어졌다.
   // 참조형변수는 변수를 만들때 동시에 초기화를 해줘야 합니다.
   int& refa = a; // 참조형 변수 refa


   cout << "refa = " << refa << endl;
   cout << "a = " << a << endl;

   refa = 100;
   cout << endl;

   cout << "refa = " << refa << endl;
   cout << "a = " << a << endl;

   // 포인터형변수와 참조형 변수는 내부적인 작동 방식은
   // 동일합니다.
   // 차이점은 참조형변수는 초기화값으로 전달된 변수의 주소값을 변경할 수 없습니다.
   // 포인터형변수는 다른 변수의 주소값으로 변경할 수 있습니다.

   int* pa = &a;   // 포인터 변수

   *pa = 2000;
   cout << endl;
   cout << "refa = " << refa << endl;
   cout << "a = " << a << endl;
   cout << "*pa  = " << *pa << endl;

   pa = &b;
   cout << endl;
   *pa = 30000;
   cout << "refa = " << refa << endl;
   cout << "a = " << a << endl;
   cout << "*pa  = " << *pa << endl;
   cout << "b = " << b << endl;


   // 상수
   100;
   200;
   300;
   // 상수형변수
   // 변수를 상수성 띠도록 만든 것
   // 상수형 변수도 변수를 만듦과 동시에 초기화를 해야 합니다.
   const int MAX = 200;

   //MAX = 300; // 상수형 변수에 다른 값을 대입할 수 없습니다.

   cout << "MAX = " << MAX << endl;




   return 0;
}
