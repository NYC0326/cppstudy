#include <iostream>

namespace BestComImpl{
	void SimpleFunc(void);
}

namespace BestComImpl{
	void PrettyFunc(void); // ������ namespace�� �ִ� ��
}

void BestComImpl::SimpleFunc(void){
	std::cout << "BestCom�� ������ �Լ�" << std::endl;
	PrettyFunc();
	// namespace ������� �ʰ� �Լ� ȣ�� ��, ���� namespace���� ã�´�.
}

void BestComImpl::PrettyFunc(void){
	std::cout << "So Pretty!!" << std::endl;
}

int main(void){
	BestComImpl::SimpleFunc();
	return 0;
}