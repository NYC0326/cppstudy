#include <iostream>

int main(void){
   // å���� C++������ ������ ������ġ�� ���� ���� �ʴ´ٴµ�
   // C�� C99���ʹ� ������ ������ġ�� ���� ���� ����
   int val1;
   std::cout << "ù ��° ���� �Է�: ";
   std::cin >> val1;
   int val2;
   std::cout << "�� ��° ���� �Է�: ";
   std::cin >> val2;
   int result = val1 + val2;
   std::cout << "�������: " << result << std::endl;
   return 0;
}