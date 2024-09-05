#include <iostream>

int countNegativeProductColumns(int** matrix, int size) {
    int negativeProductColumns = 0;
    for (int j = 0; j < size; j++) {
        int product = 1;
        for (int i = 0; i < size; i++) {
            product *= matrix[i][j];
        }
        if (product < 0) {
            negativeProductColumns++;
        }
    }
    return negativeProductColumns;
}

int main() {
    int size;
    std::cout << "Enter the size of the square matrix: ";
    std::cin >> size;

    int** matrix = new int*[size];
    for (int i = 0; i < size; i++) {
        matrix[i] = new int[size];
    }

    std::cout << "Enter elements of matrix: ";
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            std::cin >> matrix[i][j];
        }
    }

    int negativeProductColumns = countNegativeProductColumns(matrix, size);
    std::cout << "Number of columns with negative product: " << negativeProductColumns << std::endl;

    for (int i = 0; i < size; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;

    return 0;
}

