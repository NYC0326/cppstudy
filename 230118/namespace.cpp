#include <iostream>

namespace BestComImpl{
	void SimpleFunc(void){
		std::cout << "BestCom이 정의한 함수" << std::endl;
	}
}

namespace ProgComImpl{
	void SimpleFunc(void){
		std::cout << "ProgCom이 정의한 함수" << std::endl;
	}
}

// 존재하는 namespace가 다르면 동일한 이름의 함수/변수 선언해도 됨
// namespace(이름공간): 이름의 충돌을 막을 목적으로 존재함

int main(void){
	BestComImpl::SimpleFunc(); // :: 범위 지정 연산자
	ProgComImpl::SimpleFunc();
	return 0;

}