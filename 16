#include <iostream>

using namespace std;

//손흥민을 축구게임에서 필요한 데이타를 뽑으시고 캡슐화해서 클래스형 데이타 타입을 만들고
// 객체를 생성해서 값을 저장하고 출력해보세요...

class SoccerSon {
private:
   string _name;  // 멤버변수
   float _weight;
   float _height;
   float _speed;
   string _skill;

   // 멤버변수와 일반변수를 구별하기 위해서 멤버변수
   // 앞에 접두어를 붙이는 것이 좋다.
public:
   // 생성자가 없는 경우에는 
   // 생성자는 반드시 필요하기 때문에 
   // 컴파일러가 기본생성자 자동으로 생성해줍니다.
   // 생성자는 클래스명과 동일한 이름의 함수입니다.

   // 여러분이 기본생성자를 만들어 넣으면 
   // 기본생성자 있기때문에 컴파일러는 생성자를 만들지 않습니다.
   SoccerSon() { // 기본생성자( 아무 인자도 받지 않는 생성자)
      cout << "SoccerSon 기본생성자" << endl;
      _name = "이름 없음";
      _weight = 0.0f;
      _height = 0.0f;
      _speed = 0.0f;
      _skill = "스킬 없음";
   }

   SoccerSon(string name, float weight, float height, float speed, string skill) { // 인자를 받는 생성자
      cout << "인자를 5개 받는 생성자" << endl;
      _name = name;
      _weight = weight;
      _height = height;
      _speed = speed;
      _skill = skill;
   }

   SoccerSon(string name) {   // 인자를 받는 생성자
      cout << "인자를 1개 받는 생성자" << endl;
      _name = name;
      _weight = 0.0f;
      _height = 0.0f;
      _speed = 0.0f;
      _skill = "스킬없음";
   }

   string GetName() { // 멤버함수
      return _name;
   }

   void SetName(string name) {
      _name = name;
   }

   float GetWeight() {
      return _weight;
   }

   void SetWeight(float weight) {
      _weight = weight;
   }

   float GetHeight() {
      return _height;
   }

   void SetHeight(float height) {
      _height = height;
   }

   float GetSpeed() {
      return _speed;
   }

   void SetSpeed(float speed) {
      _speed = speed;
   }

   string GetSkill() {
      return _skill;
   }

   void SetSkill(string skill) {
      _skill = skill;
   }

   void Info() {
      cout << "이름: " << GetName() << endl;
      cout << "신장: " << GetHeight() << "cm" << endl;
      cout << "몸무게: " << GetWeight() << "Kg" << endl;
      cout << "100미터 달리기: " << GetSpeed() << "sec" << endl;
      cout << "스킬: " << GetSkill() << endl;
   }
};

// 객체가 생성될때 자동으로 호출되어지는 멤버함수가 있습니다.
// 이 멤버함수가 호출 되어야지만 온전한 객체로 생성이 됩니다.
// 이 멤버함수를 생성자라고 합니다.
// 생성자는 기본생성자, 인자를 받는 생성자, 복사생성자, 이동새성자가 있습니다.
// 생성자의 역활은 객체가 생성될때 선행되어야 하는 작업들을 생성자에서 하면 됩니다.
// 멤버변수값을 초기화 하거나 리소스연결, 불러오기 등등

int main() {
   SoccerSon son; // 기본 생성자가 호출되면서 객체가 생성

   son.SetName("손흥민");
   son.SetHeight(182.4f);
   son.SetWeight(82.3f);
   son.SetSpeed(11.2f);
   son.SetSkill("오버헤드킥");

   son.Info();

   cout << endl;
   SoccerSon son2; // 기본생성자 호출되면서 객체가 생성
   son2.Info();

   cout << endl;
   SoccerSon son3("손흥민2", 180.0f, 90.0f, 10.8f, "중거리슟");   // 인자를 받는 생성자가 호출되면서 객체 생성
   son3.Info();

   cout << endl;
   SoccerSon son4("손흥민3");   // 인자를 1개 받는 생성자가 호출되면서 객체 가 생성
   son4.Info();


   return 0;
}
