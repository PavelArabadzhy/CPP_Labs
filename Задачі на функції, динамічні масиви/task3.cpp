#include <iostream>

int countZeroSumRows(int** matrix, int rows, int cols) {
    int zeroSumRows = 0;
    for (int i = 0; i < rows; i++) {
        int sum = 0;
        for (int j = 0; j < cols; j++) {
            sum += matrix[i][j];
        }
        if (sum == 0) {
            zeroSumRows++;
        }
    }
    return zeroSumRows;
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

    int zeroSumRows = countZeroSumRows(matrix, rows, cols);
    std::cout << "Number of rows with zero sum: " << zeroSumRows << std::endl;

    for (int i = 0; i < rows; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;

    return 0;
}

