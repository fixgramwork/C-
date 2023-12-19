#include <iostream>

using namespace std;

//손흥민을 축구게임에서 필요한 데이타를 뽑으시고 캡슐화해서 클래스형 데이타 타입을 만들고
// 객체를 생성해서 값을 저장하고 출력해보세요...

class SoccerSon {
private:
   string name;  // 멤버변수
   float weight;
   float height;
   float speed;
   string skill;

public:
   string GetName() { // 멤버함수
      return name;
   }

   void SetName(string name) {
      name = name;
   }

   float GetWeight() {
      return weight;
   }

   void SetWeight(float weight) {
      weight = weight;
   }

   float GetHeight() {
      return height;
   }

   void SetHeight(float height) {
      height = height;
   }

   float GetSpeed() {
      return speed;
   }

   void SetSpeed(float speed) {
      speed = speed;
   }

   string GetSkill() {
      return skill;
   }

   void SetSkill(string skill) {
      skill = skill;
   }

   void Info() {
      cout << "이름: " << GetName() << endl;
      cout << "신장: " << GetHeight() << "cm" << endl;
      cout << "몸무게: " << GetWeight() << "Kg" << endl;
      cout << "100미터 달리기: " << GetSpeed() << "sec" << endl;
      cout << "스킬: " << GetSkill() << endl;
   }
};


int main() {
   SoccerSon son;
   son.SetName("손흥민");
   son.SetHeight(182.4f);
   son.SetWeight(82.3f);
   son.SetSpeed(11.2f);
   son.SetSkill("오버헤드킥");

   son.Info();


   return 0;
}
