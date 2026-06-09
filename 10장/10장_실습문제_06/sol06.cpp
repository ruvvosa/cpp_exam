#include <iostream>

using namespace std;

class Sample1 {
public:
	Sample1(){}
	virtual ~Sample1() { cout << "sample 종료" << endl; }
};

class Sample2 :public Sample1 {
public:
	Sample2(){}
	~Sample2() { cout << "sample2 종료" << endl; }
};

void main() { Sample2 a; }
