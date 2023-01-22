#include <iostream>

namespace BestComImpl{
	void SimpleFunc(void);
}

namespace BestComImpl{
	void PrettyFunc(void); // 동일한 namespace에 있는 것
}

void BestComImpl::SimpleFunc(void){
	std::cout << "BestCom이 정의한 함수" << std::endl;
	PrettyFunc();
	// namespace 명시하지 않고 함수 호출 시, 같은 namespace에서 찾는다.
}

void BestComImpl::PrettyFunc(void){
	std::cout << "So Pretty!!" << std::endl;
}

int main(void){
	BestComImpl::SimpleFunc();
	return 0;
}