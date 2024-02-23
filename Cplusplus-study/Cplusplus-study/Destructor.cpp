#include <iostream>

class Date {
	int* year;
	int* month;
	int* day;

public:

	Date() {
		year = new int;
		month = new int;
		day = new int;

		std::cin >> *year;
		std::cin >> *month;
		std::cin >> *day;
	}

	void ShowDate() {
		std::cout << *year << "�� " << *month << "�� " << *day << "��" << std::endl;
	}

	~Date() {
		std::cout << "�Ҹ��� ȣ��" << std::endl;
		delete year, month, day;
	}

};

int main() {
	Date* days[2];

	days[0] = new Date();
	days[1] = new Date();

	days[0]->ShowDate();
	days[1]->ShowDate();

	delete days[0];
	delete days[1];

	return 0;
}