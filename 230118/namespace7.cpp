#include <iostream>
using namespace std;

namespace AAA{
	namespace BBB{
		namespace CCC{
			int num1;
			int num2;
		}
	}
}

namespace ABC = AAA::BBB::CCC;

int main(void){
	ABC::num1 = 10;
	ABC::num2 = 20;
	cout << ABC::num1 << endl;
	cout << ABC::num2 << endl;
}