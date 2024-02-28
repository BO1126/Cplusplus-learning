#include <iostream>

class A {
private:
	int x;

	friend class B;
};

class B {
private:
	int y;
};