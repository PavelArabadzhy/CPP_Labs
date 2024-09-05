#include <iostream>

void replaceFirstWithMax(double* arr, int size) {
    if (size == 0) return;

    double maxElement = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > maxElement) {
            maxElement = arr[i];
        }
    }
    arr[0] = maxElement;
}

int main() {
    int size;
    std::cout << "Enter size of array: ";
    std::cin >> size;

    double* arr = new double[size];
    std::cout << "Enter elements of array: ";
    for (int i = 0; i < size; i++) {
        std::cin >> arr[i];
    }

    replaceFirstWithMax(arr, size);

    std::cout << "Modified array: ";
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    delete[] arr;
    return 0;
}
