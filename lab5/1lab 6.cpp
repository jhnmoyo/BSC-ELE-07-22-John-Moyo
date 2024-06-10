#include <iostream>
#include <string>

using namespace std;

int main() {
    int monty = 0;
    int *johnArray = nullptr;
    string *moyoArray = nullptr;

    cout << "Enter the number of people who have numbers: ";
    cin >> monty;

    johnArray = new int[monty];
    moyoArray = new string[monty];

    if (johnArray == nullptr || moyoArray == nullptr) {
        cout << "Error: Memory could not be allocated" << endl;
    } else {
        for (int i = 0; i < monty; i++) {
            cout << "Enter the number: ";
            cin >> johnArray[i];
            cout << "Enter the name: ";
            cin >> moyoArray[i];
        }
        
        cout << "You have selected: ";
        for (int j = 0; j < monty; j++) {
            cout << johnArray[j] << ", " << moyoArray[j];
            if (j < monty - 1) {
                cout << "; ";
            }
        }
        cout << endl;
        
        
        delete[] johnArray;
        delete[] moyoArray;
    }

    return 0;
}