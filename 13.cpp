#include <iostream>
#include <string>

using namespace std;

// 손흥민을 동사무소에서 필요로 하는 정보
// 나이, 거주지, 이름 , 주민번호


// 캡슐화
// class 클래스명{
//    Datas;
//};
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

   void SetAge(int value) {
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

// 캡슐화의 기본정책은 정보 은닉(클래스로 묶은 멤버를 접근하는 것을 제한하겠다는 이야기 입니다.)
// 객체의 멤버에 접근을 제어하는 것을 접근 제어자
// private: 외부에서 접근하는 것을 철저히 막겠다. (기본)
// protected: 외부에서 접근하는 것은 철저히 막겠다. 하지만 자식이 접근하는 것은 허옹
// public: 외부에서 접근하는 것을 허용하겠다.(외부에 공개)


// 멤버변수를 바로 접근하는 것을 허용하지 말라. (권고사항)
// 접근할 필요성이 있으면 멤버함수를 통해서 접근해라.
// 멤버변수를 접근할때 사용하는 멤버함수를 Set/Get 함수라고 합니다.


int main() {
   Son a;

   /*
   a.age = 33;
   a.address = "런던";
   a.name = "손흥민";
   a.juminNum = "2222222222222";
   */
   a.SetAge(33);
   a.SetAddress("런던");
   a.SetName("손흥민");
   a.SetJuminNum("22222222222222");


   /*
   cout << "나이: " << a.age << endl;
   cout << "주소: " << a.address << endl;
   cout << "이름: " << a.name << endl;
   cout << "주민번호: " << a.juminNum << endl;
   */
   cout << "나이: " << a.GetAge() << endl;
   cout << "주소: " << a.GetAddress() <<endl;
   cout << "이름: " << a.GetName() << endl;
   cout << "주민번호: " << a.GetJuminNum() << endl;

   return 0;
}
