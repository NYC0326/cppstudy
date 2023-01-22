#include <iostream>
using namespace std;

int main(void){
	int num1 = 1020;
	int &num2 = num1; // num1으로 하는 모든 연산은 num2랑 하는 것과 동일하다
	num2 = 3047;
	cout << "VAL: " << num1 << endl;
	cout << "REF: " << num2 << endl;
	cout << "VAL: " << &num1 << endl;
	cout << "REF: " << &num2 << endl;
	return 0;
}