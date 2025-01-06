#include <iostream>
#include "../inc/iter.hpp"

void printInt(int &n) {
	std::cout << n << " ";
}

void multiplyByTwo(int &n) {
	n *= 2;
}

void printString(std::string &s) {
	std::cout << s << " ";
}

int main() {
	int intArray[] = {1, 2, 3, 4, 5};
	std::cout << "Initial integers: ";
	iter(intArray, 5, printInt);
	std::cout << std::endl;

	iter(intArray, 5, multiplyByTwo);
	std::cout << "After multiplying by 2: ";
	iter(intArray, 5, printInt);
	std::cout << std::endl;

	std::string strArray[] = {"Hello", "world", "C++"};
	std::cout << "Strings: ";
	iter(strArray, 3, printString);
	std::cout << std::endl;

	return 0;
}
