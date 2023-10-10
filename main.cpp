#include <iostream>

int main() {

	setlocale(LC_ALL, "RU");

	float num1, num2, res;
	char math;

	std::cout << "Введите число 1 = ";
	std::cin >> num1;

	std::cout << "Введите число 2 = ";
	std::cin >> num2;

	std::cout << "Введите математическое действие (+, -, *, /) = ";
	std::cin >> math;

	switch (math) {
	case('+'):
		res = num1 + num2; 
		std::cout << "Результат = " << res;
		break;
	case('-'):
		res = num1 - num2;
		std::cout << "Результат = " << res;
		break;
	case('*'):
		res = num1 * num2;
		std::cout << "Результат = " << res;
		break;
	case('/'):
		res = num1 / num2;
		std::cout << "Результат = " << res;
		break;

	}



	return 0;
}
