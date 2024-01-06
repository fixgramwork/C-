#include <iostream>

using namespace std;
class Arm {
private:
   string _name;

public:
   Arm(string name)
      : _name(name) {}

   void ShowInfo() {
      cout << _name;
   }
};

class CannonArm : public Arm {
public:
   CannonArm()
      : Arm("CannonArm")
   {
   }

};

class RocketArm : public Arm {
public:
   RocketArm()
      : Arm("RocketArm")
   {
   }
};

class LazerArm : public Arm {
public:
   LazerArm()
      : Arm("LazerArm")
   {
   }
};

class Robot {
private:
   Arm* _pLeftArm;
   Arm* _pRightArm;

public:
   Robot(Arm* pLeftArm, Arm* pRightArm)
      : _pLeftArm(pLeftArm), _pRightArm(pRightArm) {}


   void ChangeLeftArm(Arm* pLeftArm) {
      _pLeftArm = pLeftArm;
   }

   void ChangeRightArm(Arm* pRightArm) {
      _pRightArm = pRightArm;
   }


   void ShowInfo() {
      cout << endl;
      cout << "Robot" << endl;
      cout << "왼쪽팔: ";
      _pLeftArm->ShowInfo();
      cout << endl;
      cout << "오른쪽팔: ";
      _pRightArm->ShowInfo();
      cout << endl;
   }

};



int main() {
   CannonArm cannonArm;
   RocketArm rocketArm;
   LazerArm lazerArm;

   Robot cannonArmRobot(&cannonArm, &cannonArm);
   Robot rocketArmRobot(&rocketArm, &rocketArm);
   Robot lazerArmRobot(&lazerArm, &lazerArm);
   Robot leftCannonArmRightRocketArmRobot(&cannonArm, &rocketArm);

   cannonArmRobot.ShowInfo();
   rocketArmRobot.ShowInfo();
   lazerArmRobot.ShowInfo();
   leftCannonArmRightRocketArmRobot.ShowInfo();
   cout << "leftCannonArmRightRocketArmRobot 왼쪽팔 변경" << endl;
   leftCannonArmRightRocketArmRobot.ChangeLeftArm(&lazerArm);
   leftCannonArmRightRocketArmRobot.ShowInfo();


   return 0;
}
