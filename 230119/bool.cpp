#include <iostream>
using namespace std;

int main(void){
	int n=10;
	int i=0;
	cout << "true: " << true << endl;   // 다른 자료형이나 정수가 와야한다면 각각 1, 0이 들어옴
	cout << "false: " << false << endl;
	while(true){
		cout << i++ << ' ';
		if(i>n)
			break;
	}
	cout << endl;
	cout << "sizeof 1: " << sizeof(1) << endl; // int니까 4
	cout << "sizeof -: " << sizeof(0) << endl;
	cout << "sizeof true: " << sizeof(true) << endl; // bool은 1
	cout << "sizeof false: " << sizeof(false) << endl;
	return 0;
}