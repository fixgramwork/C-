#include <iostream>

using namespace std;

// 프로그램에서 어디서 접근이 가능해야하는
// 변수를 정적으로 만들어서 접근 용이하게 할때 사용합니다.
class Global {
public:
   static int score;
};

int Global::score = 0;

void SetScore(int value) {
   Global::score = value;
}

int GetScore() {
   return Global::score;
}

// 필요한 함수
// 유용한 함수
class Utility {
public:
   static int add(int a, int b) {
      return a + b;
   }

   static int sub(int a, int b) {
      return a - b;
   }

   static int mul(int a, int b) {
      return a * b;
   }
};

int main() {
   Global::score = 1000;
   printf("Global::Score = %d\n", Global::score);

   int a = 20;
   int b = 30;

   Utility util;

   int ret = util.add(a, b);

   cout << a << " + " << b << " = " << ret << endl;

   // 정적멤버함수는 객체를 만들지 않고서도 접근이 가능합니다.
   cout << a << " + " << b << " = " << Utility::sub(a, b) << endl;

   return 0;
}
