#include <iostream>
#include "../inc/Array.hpp"

int main() {
	try {
		Array<int> emptyArray;
		std::cout << "Empty array size: " << emptyArray.size() << std::endl;

		Array<int> intArray(5);
		std::cout << "Array of 5 integers created." << std::endl;

		for (unsigned int i = 0; i < intArray.size(); i++) {
			intArray[i] = i * 10;
			std::cout << "intArray[" << i << "] = " << intArray[i] << std::endl;
		}

		Array<int> copiedArray = intArray;
		std::cout << "Copied array values: ";
		for (unsigned int i = 0; i < copiedArray.size(); i++) {
			std::cout << copiedArray[i] << " ";
		}
		std::cout << std::endl;

		Array<int> assignedArray(3);
		assignedArray = intArray;
		std::cout << "Assigned array values: ";
		for (unsigned int i = 0; i < assignedArray.size(); i++) {
			std::cout << assignedArray[i] << " ";
		}
		std::cout << std::endl;

		std::cout << "Accessing out of bounds: ";
		std::cout << intArray[10] << std::endl;
	}
	catch (std::exception &e) {
		std::cerr << "Exception: " << e.what() << std::endl;
	}

	return 0;
}
