#include <iostream>

using namespace std;

class Student {
private:
   string _name;
   int _age;
   int _grade;
   int _classNum;

   int& _specialClassNum;   // 참조형 변수
   const int MAX;         // 상수형변수

public:


   void Info() {
      cout << "이름: " << _name << endl;
      cout << "나이: " << _age << endl;
      cout << "학년: " << _grade << endl;
      cout << "반: " << _classNum << endl;
      cout << "특별반: " << _specialClassNum << endl;
      cout << "전체 학생수: " << MAX << endl;
   }
};

int main() {

   int specialClassNum = 10;

   Student st;

   st.Info();



   return 0;
}
