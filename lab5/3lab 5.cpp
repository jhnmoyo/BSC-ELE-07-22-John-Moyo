#include <iostream>
#include<cstring>
using namespace std;

int main (){
string blocks [8] = {"B123", "C234","A345", "C15", "B177", "G3003", "C235", "B179"};
      cout << "Elements starting with 'B' are:" << endl;
    for (int i = 0; i < 8; i++) {
        
        if (blocks[i][0] == 'B') {
            
            cout << blocks[i] << endl;
        }
    }

    return 0;
}
