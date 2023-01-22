#include <iostream>

namespace Parent{
	int n = 2; // Parent::n
	namespace SubOne{
		int n = 3; // Parent::SubOne::n
	}
	namespace SubTwo{
		int n = 4; // Parent::SubTwo::n
	}
}

int main(void){
	std::cout << Parent::n << std::endl;
	std::cout << Parent::SubOne::n << std::endl;
	std::cout << Parent::SubTwo::n << std::endl;
	return 0;
}