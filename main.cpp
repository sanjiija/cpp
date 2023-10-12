#include <iostream>

int main() {

	setlocale(LC_ALL, "RU");
	
	srand(time(NULL));
	int rand_num = 1 + rand() % 15;

	bool stop = false;
	int user_number;

	do {
		std::cout << "Enter number: ";
		std::cin >> user_number;
		if (user_number != rand_num)
			std::cout << "Вы не угадали" << std::endl;
		else 
			stop = true;
	} while (!stop);

	std::cout << "Вы победили ! Поздравляем !";

	return 0;
}
