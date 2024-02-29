#include <iostream>

class Base {
protected:
	std::string base_s;

public:
	Base() : base_s("���") {
		std::cout << "��� Ŭ����" << std::endl;
	}

	void what() {
		std::cout << base_s << std::endl;
	}
};

class Derived : public Base {
	std::string s;

public:
	Derived() : Base(), s("�Ļ�") {
		std::cout << "�Ļ� Ŭ����" << std::endl;

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