#include <iostream>

int main() {

	setlocale(LC_ALL, "RU");

	float num1, num2, res;
	char math;

	std::cout << "������� ����� 1 = ";
	std::cin >> num1;

	std::cout << "������� ����� 2 = ";
	std::cin >> num2;

	std::cout << "������� �������������� �������� (+, -, *, /) = ";
	std::cin >> math;

	switch (math) {
	case('+'):
		res = num1 + num2; 
		std::cout << "��������� = " << res;
		break;
	case('-'):
		res = num1 - num2;
		std::cout << "��������� = " << res;
		break;
	case('*'):
		res = num1 * num2;
		std::cout << "��������� = " << res;
		break;
	case('/'):
		res = num1 / num2;
		std::cout << "��������� = " << res;
		break;

	}



	return 0;
}
