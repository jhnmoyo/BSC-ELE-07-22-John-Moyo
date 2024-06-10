#include <iostream>

using namespace std;


double triangle(double base, double height) {
    
    double area = (base * height) / 2;
    return area;
}


double square(double length) {
   
    double area = length * length;
    return area;
}


double rectangle(double length, double height) {
    
    double area = length * height;
    return area;
}

int main() {
    
    double length, height, base;


    cout << "Please select the shape to calculate the area of:" << endl;
    cout << "1. Square" << endl;
    cout << "2. Rectangle" << endl;
    cout << "3. Triangle" << endl;
    cout << "4. Quit program" << endl;
    cout << "Enter your selection: ";

    int choice;
    cin >> choice;

    
    switch (choice) {
        case 1: 
            cout << "Enter the length of a side: ";
            cin >> length;
            cout << "The area of the square is: " << square(length) << endl;
            break;
        case 2: 
            cout << "Enter the length: ";
            cin >> length;
            cout << "Enter the height: ";
            cin >> height;
            cout << "The area of the rectangle is: " << rectangle(length, height) << endl;
            break;
        case 3: 
            cout << "Enter the base: ";
            cin >> base;
            cout << "Enter the height: ";
            cin >> height;
            cout << "The area of the triangle is: " << triangle(base, height) << endl;
            break;
        case 4: 
            cout << "Quitting the program." << endl;
            break;
        default: 
            cout << "Invalid choice. Please enter a number between 1 and 4." << endl;
    }

    return 0;
}