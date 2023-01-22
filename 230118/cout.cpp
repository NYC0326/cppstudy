#include <iostream> // 기본 헤더파일

int main(void){
	int n = 20; // 변수 선언 방법은 같음
	// std::cout은 출력
	// << 사이에는 출력 대상을 출력한다.
	// std::cout<<‘출력대상1’<<‘출력대상2’<<‘출력대상3’;
	// std::endl 은 개행
	// 서식 지정 필요 없는게 C랑 차이점
	std::cout << "Hello World!" << std::endl;
	std::cout << "Hello " << "World!" << std::endl;
	std::cout << n << ' ' << 'A';
	std::cout << ' ' << 3.14 << std::endl;
	return 0;
}