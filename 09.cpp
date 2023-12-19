#include <iostream>

using namespace std;
// 선택문 
// 정수값의 변화에따라서 분기 처리 할때 사용.

int main() {
   int remoteNum = 0;

   cout << "리모컨 컨트롤 번호를 입력하세요: ";
   cin >> remoteNum;

   // 선택문
   
   switch (remoteNum) {
   case 0:
      cout << "TV 켜" << endl;
      break;

   case 1:
      cout << "TV 꺼" << endl;
      break;

   case 2:
      cout << "볼륨 ON" << endl;
      break;

   case 3:
      cout << "볼륨 OFF" << endl;
      break;

   default:
      cout << "리모컨 컨트롤 번호를 잘못 입력하셨습니다." << endl;
      break;

   }


   return 0;
}
