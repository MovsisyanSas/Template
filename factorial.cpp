#include <iostream>

template<typename T>
T factorial(T n) {
	if (n >= 1)
	{
		return n * factorial(n - 1);
	}
	else {
		return 1;
	}
}

int main() {
	int a = 6;
	double b = 2.0;
	std::cout << factorial(a) << std::endl;
	std::cout << factorial(b) << std::endl;
}