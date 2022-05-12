#include <iostream>

int main()
{
    int number = 0;
	std::cout << "Podaj liczbe: ";
	std::cin >> number;

	if (number > 0)
	{
		std::cout << "Liczba jest wieksza od 0";
	}
	else if (number < 0)
	{
		std::cout << "Liczba jest mniejsza od 0";
	}
	else
	{
		std::cout << "Liczba jest rowna 0";
	}
}
