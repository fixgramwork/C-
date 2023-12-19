#include <iostream>

using namespace std;

//프로그래밍 언어를 왜 배워야 하는지..
//-컴퓨터 일이 시키려고.
//왜 컴퓨터 일이 시키려고 하는데 프로그래밍 언어를 배우는가?
//-어떤 데이터를 다루는지

/*c++언어
기본 데이타 타입

정수형
short(2byte) 반은 음수 반은 양수를 처리하는데 사용한다 -32768 ~ 32767
long(4byte) 반은 음수 반은 양수를 처리하는데 사용한다. -2147483648 ~ 2147483647
int(시스템 의존적)컴퓨터가 한번에 처리할 수 있는 단위
long long int(8byte)


unsigned short(2byte) 0 ~ 65535
unsigned long(4byte) 0 ~ 426467295
unsigned int(4byte)
unsigned long long int(8byte)

실수형
float(4byte)
double(8byte)

문자형
char(1byte) -128 ~ 127
unsigned char(1byte) 0 ~ 255

불형
bool(1byte) 참/거짓

c언어를 기반을 만들어짐 -> 정수값을 가지고 논리값을 처리하는 특성을 가지고 있다.
0은 거짓
0이외의 값은 참으로
*/

int main() {

	int a = 1;
	int b = 2;

	int ret = a + b; //정수 + 정수 = 정수
	cout << a << " + " << b << " = " << ret << endl;

	ret = a - b; //정수 - 정수 = 정수
	cout << a << " - " << b << " = " << ret << endl;

	ret = a * b;//정수 * 정수 = 정수
	cout << a << " x " << b << " = " << ret << endl;

	ret = a / b;//정수 / 정수 = 정수
	cout << a << " / " << b << " = " << ret << endl;

	float fret = a / (float)b;

	cout << a << " / " << b << " = " << fret << endl;


	return 0;
}
