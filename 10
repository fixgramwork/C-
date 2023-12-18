#include <iostream>

using namespace std;
// 무조건 분기문 goto

int main() {
   int inputValue = 0;

Start:   // 레이블
   cout << "정수값을 입력하세요: " << endl;
   cin >> inputValue;

   if (inputValue < 0) {
      cout << inputValue << "가 입력되어서 프로그램을 종료합니다." << endl;

      goto Exit;
   }

   cout << inputValue << "가 입력되어서 다시 시작합니다." << endl;

   goto Start;

   cout << "절대 출력 안됨" << endl;

Exit:
   cout << "프로그램 종료" << endl;


   return 0;
}
