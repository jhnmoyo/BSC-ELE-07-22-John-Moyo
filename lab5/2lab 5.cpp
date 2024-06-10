#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
    srand(time(0));
    int daysUntilExpiration = rand() % 12; 

    switch (daysUntilExpiration){
        case 0: 
             cout << "your subscription has expired." << endl;
                           break;
                      case 1: 
                          cout << "your subscription expires within a day! Renew now and save 20%." << endl;
                               break;
                                default:
                  if (daysUntilExpiration <= 5) {
                    cout << "your subscription expires in " << daysUntilExpiration <<" " << "days. Renew now and save 10%." << endl;
                  }
                  else if (daysUntilExpiration <= 10) {
                    cout << "your subscription will expire soon. Renew now!" << endl;
                  }
                  else {
                    cout << "you have an active subscription." << endl; 
                  }
                  break;
    }
    return 0;
}
   