#include <iostream>

class Date {
	static int current_day_count;
	
	int year;
	int month;
	int day;

public:

	Date(int year, int month, int day) :
		year(year), month(month), day(day) {
		current_day_count++;
	}

	void ShowDate() {
		std::cout << year << "년 " << month << "월 " << day << "일" << std::endl;
		std::cout << "현재 day 개수: " << current_day_count << std::endl;
	}

	int GetYear() const {
		return year;
	}

};

int Date::current_day_count = 0;

int main() {
	Date day = Date(2024, 02, 23);
	day.ShowDate();

	Date day2 = Date(2023, 11, 01);

	day.ShowDate();
	day2.ShowDate();

	return 0;
}