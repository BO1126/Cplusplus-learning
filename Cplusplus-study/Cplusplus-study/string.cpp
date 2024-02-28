#include <iostream>

int main() {
	std::string s = "abc";
	std::string s2 = s;

	std::cout << s << std::endl << "s의 길이: " << s.length() << std::endl;

	if (s == s2) {
		std::cout << "s와 s2는 같다." << std::endl;
	}

	return 0;
}