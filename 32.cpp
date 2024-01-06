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
   Arm& _refLeftArm;
   Arm& _refRightArm;

public:
   Robot(Arm& refLeftArm, Arm& refRightArm)
      : _refLeftArm(refLeftArm), _refRightArm(refRightArm) {}


   void ShowInfo() {
      cout << endl;
      cout << "Robot" << endl;
      cout << "왼쪽팔: ";
      _refLeftArm.ShowInfo();
      cout << endl;
      cout << "오른쪽팔: ";
      _refRightArm.ShowInfo();
      cout << endl;
   }

};

class CannonArmRobot : public Robot {
public:
   CannonArmRobot(CannonArm& refLeftArm, CannonArm& refRightArm)
      : Robot(refLeftArm, refRightArm)
   {}
};

class RocketArmRobot : public Robot {
public:
   RocketArmRobot(RocketArm& refLeftArm, RocketArm& refRightArm)
      : Robot(refLeftArm, refRightArm)
   {}
};

class LazerArmRobot : public Robot {
public:
   LazerArmRobot(LazerArm& refLeftArm, LazerArm& refRightArm)
      : Robot(refLeftArm, refRightArm)
   {}
};

int main() {
   CannonArm cannonArm;
   RocketArm rocketArm;
   LazerArm lazerArm;

   CannonArmRobot cannonArmRobot(cannonArm, cannonArm);
   RocketArmRobot rocketArmRobot(rocketArm, rocketArm);
   LazerArmRobot lazerArmRobot(lazerArm, lazerArm);

   cannonArmRobot.ShowInfo();
   rocketArmRobot.ShowInfo();
   lazerArmRobot.ShowInfo();


   return 0;
}
