#include <iostream>

int main() {
	std::string s = "abc";
	std::string s2 = s;

	std::cout << s << std::endl << "s�� ����: " << s.length() << std::endl;

	if (s == s2) {
		std::cout << "s�� s2�� ����." << std::endl;
	}

	return 0;
}