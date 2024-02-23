#include <iostream>

int main() {
	int size;

	std::cout << "array size: ";
	std::cin >> size;

	int* list = new int[size];
	for (int i = 0; i < size; i++) {
		std::cin >> list[i];
	}

	for (int i = 0; i < size; i++) {
		std::cout << list[i] << std::endl;
	}

	delete[] list;

	return 0;
}