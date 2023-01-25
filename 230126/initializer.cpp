#include <iostream>
using namespace std;

class SoSimple{
	private:
		int num1;
		int num2;
	public:
		SoSimple(int n1, int n2) : num1(n1){
			num2 = n2;
		}

		void ShowNum() { cout << num1 << endl; }
}; 

int main(void){
		SoSimple simObj1(10, 20);
		simObj1.ShowNum();
}