#include <iostream>

namespace BestComImpl{
	void SimpleFunc(void){
		std::cout << "BestCom�� ������ �Լ�" << std::endl;
	}
}

namespace ProgComImpl{
	void SimpleFunc(void){
		std::cout << "ProgCom�� ������ �Լ�" << std::endl;
	}
}

// �����ϴ� namespace�� �ٸ��� ������ �̸��� �Լ�/���� �����ص� ��
// namespace(�̸�����): �̸��� �浹�� ���� �������� ������

int main(void){
	BestComImpl::SimpleFunc(); // :: ���� ���� ������
	ProgComImpl::SimpleFunc();
	return 0;

}