#include<iostream>

int main() {
	int n;
	double total = 0, money;
	std::cin >> n;
	for (int i = 1; i < n + 1; i++) {
		total = total + i * 10000;
	}
	money = total / n;
	std::cout << money << std::endl;

	return 0;
}