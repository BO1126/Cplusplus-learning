#include <iostream>

int main() {
	int i = 0;
	char c[6] = "hello";
	double d = 10.1;
	float f = 2.3f;
	int* pi = &i;

	std::cout << *pi;


	for (i = 0; i < 10; i++) {
		if (i % 2 == 0) {
			std::cout << i << std::endl;
		}
	}

	return 0;
}