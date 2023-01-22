#include <iostream>
#define SQUARE(x) ((x)*(x))

inline int SQUARE2(int x){
	return x * x;
}

int main(void){
	std::cout << SQUARE(5) << std::endl;
	std::cout << SQUARE(3.15) << std::endl;
	std::cout << SQUARE2(5) << std::endl;
	std::cout << SQUARE2(3.15) << std::endl;
	// inline 선언된 함수는 자료형에 독립되지 못하다
	// inline은 나중에 자료형을 T로 받으면 자유로워지긴 함 (템플릿)
	return 0;
}