#include <iostream>
#include "square.h"
#include "triangle.h"
#include "circle.h"
#include "area.h"

using namespace shapes;
using namespace std;

int main() {
    char choice;
    do {
        cout << "Select an option:" << endl;
        cout << "1. Calculate the area of a square" << endl;
        cout << "2. Calculate the area of a triangle" << endl;
        cout << "3. Calculate the area of a circle" << endl;
        cout << "4. Quit" << endl;
        cin >> choice;

        switch (choice) {
            case '1': {
                double side;
                cout << "Enter the side length of the square: ";
                cin >> side;
                Square square(side);
                cout << "Area of the square: " << Area::calculateSquareArea(square) << endl;
                break;
            }
            case '2': {
                double base, height;
                cout << "Enter the base and height of the triangle: ";
                cin >> base >> height;
                Triangle triangle(base, height);
                cout << "Area of the triangle: " << Area::calculateTriangleArea(triangle) << endl;
                break;
            }
            case '3': {
                double radius;
                cout << "Enter the radius of the circle: ";
                cin >> radius;
                Circle circle(radius);
                cout << "Area of the circle: " << Area::calculateCircleArea(circle) << endl;
                break;
            }
            case '4':
                cout << "Exiting program..." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != '4');

    return 0;
}
