#include <iostream>

using namespace std;

  #include <iostream>
using namespace std;
int main() {
    int rows, cols;

    
    cout << "Enter the number of rows (not exceeding 3): ";
    cin >> rows;
    if (rows < 1 || rows > 3) {
        cout << "Invalid input! Number of rows must be between 1 and 3." << endl;
        return 1;
    }

    cout << "Enter the number of columns (not exceeding 3): ";
    cin >> cols;
    if (cols < 1 || cols > 3) {
        cout << "Invalid input! Number of columns must be between 1 and 3." << endl;
        return 1;
    }


    double** array = new double*[rows];
    for (int i = 0; i < rows; i++) {
        array[i] = new double[cols];
    }

    
    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "Element at [" << i << "][" << j << "]: ";
            cin >> array[i][j];
        }
    }

    cout << "The 2D array you entered is:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }