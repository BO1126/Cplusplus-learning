#include <iostream>

class Base {
protected:
	std::string base_s;

public:
	Base() : base_s("기반") {
		std::cout << "기반 클래스" << std::endl;
	}

	void what() {
		std::cout << base_s << std::endl;
	}
};

class Derived : public Base {
	std::string s;

public:
	Derived() : Base(), s("파생") {
		std::cout << "파생 클래스" << std::endl;

		what();
	}

	void what() {
		std::cout << s << std::endl;
		std::cout << base_s << std::endl;
	}

};

int main() {

	Base p; // parents

	Derived c; // chiled

	return 0;
}