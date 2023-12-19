#include <iostream>

using namespace std;


int main() {
   // 관계연산자
   // <, >, <= , >= , == , !=

   int a = 20;
   int b = 30;

   bool ret = a < b; // 관계연산자의 연산의 결과값의 데이타 타입은 뭔가요? boolean (논리값)
   cout << a << " < " << b << " = " << ret << endl;

   ret = a > b;
   cout << a << " > " << b << " = " << ret << endl;
   
   ret = a <= b;
   cout << a << " <= " << b << " = " << ret << endl;

   ret = a >= b;
   cout << a << " >= " << b << " = " << ret << endl;

   ret = a == b;
   cout << a << " == " << b << " = " << ret << endl;
   
   ret = a != b;
   cout << a << " != " << b << " = " << ret << endl;


   return 0;
}
