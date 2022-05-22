#include <iostream>
#include "Functions.h"

int main()
{
	//int power
	std::cout << power(3, -1) << std::endl;
	std::cout << power(3, 0) << std::endl;
	std::cout << power(3, 1) << std::endl;
	std::cout << power(3, 2) << std::endl;
	std::cout << power(3, 4) << std::endl;
	std::cout << std::endl;
	//float power
	std::cout << power(3.5f, -1.0f) << std::endl;
	std::cout << power(3.5f, 0.0f) << std::endl;
	std::cout << power(3.5f, 1.0f) << std::endl;
	std::cout << power(3.5f, 2.0f) << std::endl;
	std::cout << power(3.5f, 4.0f) << std::endl;
	std::cout << std::endl;

	//double power
	std::cout << power(3.5, -1.0) << std::endl;
	std::cout << power(3.5, 0.0) << std::endl;
	std::cout << power(3.5, 1.0) << std::endl;
	std::cout << power(3.5, 2.0) << std::endl;
	std::cout << power(3.5, 4.0) << std::endl;
	std::cout << std::endl;
}
