#include <iostream>

using namespace std;

// 정적멤버변수

class Monster {
private:
   string _name;
   int _health;
   int _attack;
   int _defense;

public:
   // 정적멤버변수는 Monster클래스를 통해서 클래스 영역에  하나만 만들어지고
   // 하나 만들어진 정적멤버변수를 Monster클래스를 통해서 만들어진 객체들이 공유해서 사용합니다.
   static int Count; // 정적멤버변수 , 클래스 변수

   Monster(string name, int health, int attack, int defense)
      : _name(name), _health(health), _attack(attack), _defense(defense) 
   {
      cout << _name << " _Monster 생성자 " << endl;
      Count++;
   }

   ~Monster() {
      cout << _name << " _Monster 소멸자 " << endl;
      Count--;
   }

   void Attack() {
      cout << _name << "이 공격을 합니다." << endl;
   }

   void Defense() {
      cout << _name << "이 방어를 합니다." << endl;
   }

   void Info() {
      cout << "이름: " << _name << endl;
      cout << "생명력: " << _health << endl;
      cout << "공격력: " << _attack << endl;
      cout << "방어력: " << _defense << endl;      
      cout << "전체 몬스터 수 : " << Count << endl << endl;
   }
};

// 정적멤버변수는 클래스 선언 외부에서 초기화를 해야 합니다.
int Monster::Count = 0;   // 정적멤버 변수 초기화

int main() {
   cout << "전체 몬스터 갯수: " << Monster::Count << endl; // 정적멤버변수는 클래스명을 통해서 접근이 가능합니다.

   Monster dragon("dragon", 100, 30, 10);

   //dragon.Info();
   cout << "전체 몬스터 갯수: " << Monster::Count << endl; // 정적멤버변수는 클래스명을 통해서 접근이 가능합니다.
   {
      Monster ogre("ogre", 60, 20, 8);

      //ogre.Info();
      cout << "전체 몬스터 갯수: " << Monster::Count << endl; // 정적멤버변수는 클래스명을 통해서 접근이 가능합니다.
      {
         Monster golem("golem", 60, 30, 20);

         //golem.Info();
         cout << "전체 몬스터 갯수: " << Monster::Count << endl; // 정적멤버변수는 클래스명을 통해서 접근이 가능합니다.
      }
      //ogre.Info();
      cout << "전체 몬스터 갯수: " << Monster::Count << endl; // 정적멤버변수는 클래스명을 통해서 접근이 가능합니다.
   }

   Monster goblin("goblin", 50, 30, 10);

   //goblin.Info();
   cout << "전체 몬스터 갯수: " << Monster::Count << endl; // 정적멤버변수는 클래스명을 통해서 접근이 가능합니다.


   return 0;
}
