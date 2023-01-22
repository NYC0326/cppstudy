#include <iostream>
using namespace std;

int main(void){
	int *ptr1 = new int;
	double *ptr2 = new double;
	int *arr1 = new int[3];
	double *arr2 = new double[7];

	*ptr1 = 10;
	cout << *ptr1 << endl;

	*ptr2 = 3.141592;
	cout << *ptr2 << endl;

	for (int i = 0; i < 3; i++)
		arr1[i] = i;

	for (int i = 0; i < 3; i++)
		cout << arr1[i] << endl;

	int &ref = *ptr1;
	ref = 20;
	cout << *ptr1 << endl;

	delete ptr1;
	delete ptr2;
	delete[] arr1;
	delete[] arr2;
}