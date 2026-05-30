#include <iostream>
using namespace std;

class Sample1 {
public:
	Sample1(){}
	void play() { cout << "1번 샘플" << endl; }
};

class Sample2 :public Sample1 {
public:
	Sample2() {}
	void play() { cout << "2번 샘플" << endl; }
};

class Sample3 :public Sample1 {
public:
	Sample3() {}
	void play() { cout << "3번 샘플" << endl; }
};

class Sample4 :public Sample1 {
public:
	Sample4() {}
	void play() { cout << "4번 샘플" << endl; }
};

int main() {
	Sample1* arr[4];
	Sample1* a = new Sample1();
	Sample2* b = new Sample2();
	Sample3* c = new Sample3();
	Sample4* d = new Sample4();
	arr[0] = a;
	arr[1] = b;
	arr[2] = c;
	arr[3] = d;
	for (int i = 0; i < 4; i++)arr[i]->play();

}

//현재 예상 출력
/*1번 샘플
1번 샘플
1번 샘플
1번 샘플*/

/*C++은 기본적으로 컴파일 시점에 포인터의 타입만 보고 어떤 함수를 호출할지 미리 결정해버려서*/

//부모 클래스(Sample 1)에사 virtual을 선언 해줘야지 각 자식의 고유한 기능을 실행할 수 있게 됨.