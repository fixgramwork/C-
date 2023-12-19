#include <iostream>
#include <string>

using namespace std;

class Son { // Son 클래스형 데이타 타입을 만듦
private:
   int age; // 멤버변수 (객체의 속성을 담당)
   string address;
   string name;
   string juminNum;

public:
   int GetAge() { // 멤버함수 (객체의 액션(행동)을 담당)
      return age;
   }
   // 멤버변수를 멤버함수 접근할때 데이타 무결성보장
   // 디버깅 작업이 용이 (에러를 찾기가 용이)
   void SetAge(int value) {
      if (value >= 200) {
         value = 200;
      }
      else if (value <= 1) {
         value = 1;
      }

      age = value;
   }

   string GetAddress() {
      return address;
   }

   void SetAddress(string value) {
      address = value;
   }

   string GetName() {
      return name;
   }

   void SetName(string value) {
      name = value;
   }

   string GetJuminNum() {
      return juminNum;
   }

   void SetJuminNum(string value) {
      juminNum = value;
   }

};


int main() {
   Son a;

   a.SetAge(33);
   a.SetAddress("런던");
   a.SetName("손흥민");
   a.SetJuminNum("22222222222222");


   cout << "나이: " << a.GetAge() << endl;
   cout << "주소: " << a.GetAddress() << endl;
   cout << "이름: " << a.GetName() << endl;
   cout << "주민번호: " << a.GetJuminNum() << endl;


   a.SetAge(400);
   //a.age = 400;

   cout << "나이: " << a.GetAge() << endl;

   return 0;
}
