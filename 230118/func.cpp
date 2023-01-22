#include <iostream>

int MyFunc(int n){
	n++;
	return n;
}

int MyFunc(int a, int b){
	return a + b;
}

int main(void){
	std::cout << MyFunc(20) << std::endl;
	std::cout << MyFunc(30, 40);
	// C++은 함수 호출시 "함수 이름" & "전달되는 인자의 정보"를 동시 참조
	// 매개변수 다르면 동일한 이름도 가능
	// 매개변수 동일, 이름 동일, 반환형 다른건 오버로딩 안됨
}