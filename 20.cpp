#include <iostream>

using namespace std;

class Student {
private:
   string _name;
   int _age;
   int _grade;
   int _classNum;

   // 참조형변수와 상수형변수는
   // 생성자 초기화 리스트에서 초기화를 해야 합니다.
   int& _specialClassNum;   // 참조형 변수
   const int MAX;         // 상수형변수

public:
   Student(string name, int age, int grade, int classNum, int specialClassNum, int max)
      : _name(name), _age(age), _grade(grade), _classNum(classNum),  _specialClassNum(specialClassNum), MAX(max) // 생성자 초기화리스트   
   {
   }


   void Info() {
      cout << "이름: " << _name << endl;
      cout << "나이: " << _age << endl;
      cout << "학년: " << _grade << endl;
      cout << "반: " << _classNum << endl;
      cout << "특별반: " << _specialClassNum << endl;
      cout << "전체 학생수: " << MAX << endl;
   }
};

// 생성자가 반드시 필요한 경우가 있습니다.
// 멤버변수에 참조형변수, 상수형변수가 있는 경우에는 
// 반드시 생성자를 만들어야 합니다.
// 참조형변수, 상수형변수는 변수를 만듦과 동시에 초기화를 해야 합니다.

int main() {

   int specialClassNum = 10;

   Student st("monster", 18, 3, 11, specialClassNum, 200);

   st.Info();

   specialClassNum = 30000;

   st.Info();


   return 0;
}
