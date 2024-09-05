#include <iostream>

bool hasElementInRange(int* arr, int size, int a, int b) {
	for (int i = 0; i < size; i++) {
		if (arr[i] >= a && arr[i] <= b) {
			return true;
		}
	}
	return false;
}

int main() {
	int size, a, b;
	std::cout << "Enter size of array: ";
	std::cin >> size;

	int* arr = new int[size];
	std::cout << "Enter elements of array: ";
	for (int i = 0; i < size; i++) {
		std::cin >> arr[i];
	}

	std::cout << "Enter range [a; b]: ";
	std::cin >> a >> b;

	if (hasElementInRange(arr, size, a, b)) {
		std::cout << "There is at least one element in the range [" << a << "; " << b << "].\n";
	} else {
		std::cout << "There are no elements in the range [" << a << "; " << b << "].\n";
	}

	delete[] arr;
	return 0;
}
