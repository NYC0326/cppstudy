#include <iostream>
using namespace std;

bool IsPositive(int n){ // true false를 반환하는, bool형을 반환하는 함수
	if(n<0)
		return false;
	else
		return true;
}

int main(void){
	bool isPos;
	int n;
	cout << "Input number: ";
	cin >> n;

	isPos = IsPositive(n);
	if(isPos)
		cout << "Positive number" << endl;
	else
		cout << "Negative number" << endl;
	return 0;
}