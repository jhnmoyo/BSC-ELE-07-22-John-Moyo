#include <iostream>
using namespace std;
int main() {
    int cols, rows;

    
    cout << "Enter the number of rows (1-3): ";
    cin >> rows;
    while (rows < 1 || rows > 3) {
        cout << "The input is invalid. Please enter a number between 1 and 3: ";
        cin >> rows;
    }

    cout << "Enter the number of columns (1-3): ";
    cin >> cols;
    while (cols < 1 || cols > 3) {
        std::cout << "The input is ivalid. Please enter a number between 1 and 3: ";
        std::cin >> cols;
    }


    double** array = new double*[rows];
    for (int i = 0; i < rows; ++i) {
        array[i] = new double[cols];
    }

    
    cout << "Enter values to be added to the array elements:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << "Element [" << i << "," << j << "]: ";
            cin >> array[i][j];
        }
    }

    
    cout << "The values in the array are:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }

    
    for (int i = 0; i < rows; ++i) {
        delete[] array[i];
    }
    delete[] array;

    return 0;
}