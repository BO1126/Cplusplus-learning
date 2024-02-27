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

	Date(const Date& d) {
		year = d.year;
		month = d.month;
		day = d.day;
	}

	void ShowDate() {
		std::cout << year << "³â " << month << "¿ù " << day << "ÀÏ" << std::endl;
	}

};

int main() {
	Date day = Date(2024, 02, 23);
	Date day2 = Date(day);

	day.ShowDate();
	day2.ShowDate();

	return 0;
}