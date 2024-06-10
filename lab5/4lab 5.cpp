#include <iostream>
#include <limits>

using namespace std;

int main() {
    int hoj;

    while (true) {
        cout << "Please enter an integer value between 5 and 10: ";

        
        if (!(cin >> hoj)) {
            cout << "That's not a valid integer. Please try again." << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }

        if (hoj >= 5 && hoj <= 10) {
            
            cout << "your input value: " <<hoj << "  " << "Is accepted";
            break;
        } else {
            cout << "The value is not between 5 and 10. Please try again." << endl;
        }
    }
}