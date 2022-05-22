// Zad. 3.3
// Zrealizuj wielokrotne przeci¹¿enie funkcji multiply, w taki
// sposób, a¿eby umo¿liwia³a przyjmowanie 2, 3, 4
// argumentów.

#include <iostream>
#include "Functions.h"

int main()
{
	std::cout << multiply(2,3) << std::endl;
	std::cout << multiply(2,3,4) << std::endl;
	std::cout << multiply(2,3,4,5) << std::endl;
}

