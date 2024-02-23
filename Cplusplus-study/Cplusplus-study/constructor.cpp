#include <iostream>

class Date {
	int year;
	int month;
	int day;

public:

	Date(int year, int month, int day) {
		this->year = year;
		this->month = month;
		this->day = day;
	}

	void ShowDate() {
		std::cout << year << "³â " << month << "¿ù " << day << "ÀÏ" << std::endl;
	}

};

int main() {
	Date day = Date(2024, 02, 23);
	day.ShowDate();

	return 0;
}