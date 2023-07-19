#include <iostream>

template<typename T>
T fibonacci(T n) {
	if (n > 2)
	{
		return fibonacci(n - 1) + fibonacci(n - 2);
	}
	else{
		return 1;
	}
}

int main() {
	int a = 10;
	double b = 5.5;
	std::cout << fibonacci(a) << std::endl;
	std::cout << fibonacci(b) << std::endl;
}