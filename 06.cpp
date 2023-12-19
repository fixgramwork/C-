#include <iostream>

using namespace std;

// 제어문
// 프로그램은 일방적인 실행흐름을 가지고 있습니다.
// 일방적인 실행흐름을 제어해야 할 필요성이 있습니다.
// 이럴때 사용하는 것을 제어문이라고 합니다.
// 조건문
//   분기문
//   조건분기 (if, if-else, if-else-if), 선택문(switch-case)
//   무조건분기 (goto)
// 반복문
// (for, while, do-while)

int main() {
   int inputValue = 0;
   cout << "정수값을 입력하세요: ";
   cin >> inputValue;

   if (inputValue > 20) { // 단일 조건문
      cout << inputValue << "가 20보다 큽니다." << endl;
   }
   

   if (inputValue > 30) { // 이중 조건문
      cout << inputValue << "가 30보다 큽니다." << endl;
   }
   else {
      cout << inputValue << "가 30보다 작거나 같습니다.." << endl;
   }


   return 0;
}
