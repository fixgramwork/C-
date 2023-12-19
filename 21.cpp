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
   static int Count; // 정적멤버변수

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
   Monster dragon("dragon", 100, 30, 10);

   dragon.Info();
   {
      Monster ogre("ogre", 60, 20, 8);

      ogre.Info();
      {
         Monster golem("golem", 60, 30, 20);

         golem.Info();
      }
      ogre.Info();
   }

   Monster goblin("goblin", 50, 30, 10);

   goblin.Info();


   return 0;
}
