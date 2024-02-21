#include <iostream>

int main() {
	int a = 3;
	int& ref = a;

	ref = 5;
	std::cout << "a: " << a << std::endl;
	std::cout << "ref: " << ref;

	return 0;
}