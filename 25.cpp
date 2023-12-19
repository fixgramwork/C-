#include <iostream>
#include <string>

using namespace std;

class Car {
private:
   string _modelName;   // 멤버변수
   int _wheelCount;
   int _speed;

public:
   Car(string modelName, int wheelCount, int speed)
      : _modelName(modelName), _wheelCount(wheelCount), _speed(speed) {}

   void Break() {
      cout << _modelName << "이 멈춥니다." << endl;
   }

   void Aceel() {
      cout << _modelName << "이 가속을 합니다." << endl;
   }

   void Info() {
      cout << "모델명: " << _modelName << endl;
      cout << "바퀴갯수: " << _wheelCount << endl;
      cout << "속도: " << _speed << endl;   
   }
};

int main() {
   Car genesis("제네시스", 4, 200);
   Car qm6("QM6", 4, 180);

   genesis.Info();

   cout << endl;
   qm6.Info();

   return 0;
}
