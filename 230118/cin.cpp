#include <iostream>

int main(void){
   // 책에는 C++에서는 변수의 선언위치에 제한 두지 않는다는데
   // C도 C99부터는 변수의 선언위치에 제한 두지 않음
   int val1;
   std::cout << "첫 번째 숫자 입력: ";
   std::cin >> val1;
   int val2;
   std::cout << "두 번째 숫자 입력: ";
   std::cin >> val2;
   int result = val1 + val2;
   std::cout << "덧셈결과: " << result << std::endl;
   return 0;
}