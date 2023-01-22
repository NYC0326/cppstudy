#include <iostream>

int main(void){
	int val1, val2;
	int result = 0;
	std::cout << "두 개의 숫자 입력: ";
	std::cin >> val1 >> val2;
	// 알아서 공백(스페이스바, 엔터, 탭)으로 구분함
	
	if(val1<val2){
		for (int i = val1 + 1; i < val2; i++)
			result += i;
	}
	else{
		for (int i = val2 + 1; i < val1; i++) 
		// C처럼 for문 안에서도 변수 선언 가능
			result += i;
	}
	std::cout << "두 수 사이의 정수 합: " << result << std::endl;
	return 0;
}