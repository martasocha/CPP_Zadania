// Zad. 3.3
// Zrealizuj wielokrotne przeci��enie funkcji multiply, w taki
// spos�b, a�eby umo�liwia�a przyjmowanie 2, 3, 4
// argument�w.

#include <iostream>
#include "Functions.h"

int main()
{
	std::cout << multiply(2,3) << std::endl;
	std::cout << multiply(2,3,4) << std::endl;
	std::cout << multiply(2,3,4,5) << std::endl;
}

