#include <iostream>
#include <limits.h>

void findMinInEvenRows(int** matrix, int rows, int cols) {
    for (int i = 1; i < rows; i += 2) {
        int minElement = INT_MAX;
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] < minElement) {
                minElement = matrix[i][j];
            }
        }
        std::cout << "Minimum element in row " << i + 1 << " is " << minElement << std::endl;
    }
}

int main() {
    int rows, cols;
    std::cout << "Enter number of rows and columns: ";
    std::cin >> rows >> cols;

    int** matrix = new int*[rows];
    for (int i = 0; i < rows; i++) {
        matrix[i] = new int[cols];
    }

    std::cout << "Enter elements of matrix: ";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            std::cin >> matrix[i][j];
        }
    }

    findMinInEvenRows(matrix, rows, cols);

    for (int i = 0; i < rows; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;

    return 0;
}

