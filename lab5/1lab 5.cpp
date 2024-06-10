#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
    
    srand(time(NULL));
    
    
    int random_number = rand() % 12;
    
    
    int daysUntilExpiration;
    
    
    if (random_number == 0) {
        daysUntilExpiration = 0;
    } else if (random_number == 1) {
        daysUntilExpiration = 1;
    } else if (random_number == 2) {
        daysUntilExpiration = 2;
    } else if (random_number == 3) {
        daysUntilExpiration = 3;
    } else if (random_number == 4) {
        daysUntilExpiration = 4;
    } else if (random_number == 5) {
        daysUntilExpiration = 5;
    } else if (random_number == 6) {
        daysUntilExpiration = 6;
    } else if (random_number == 7) {
        daysUntilExpiration = 7;
    } else if (random_number == 8) {
        daysUntilExpiration = 8;
    } else if (random_number == 9) {
        daysUntilExpiration = 9;
    } else if (random_number == 10) {
        daysUntilExpiration = 10;
    } else {
        daysUntilExpiration = 11;
    }
    
    
    if (daysUntilExpiration <= 0) {
        cout << "Your subscription has expired." << endl;
    } else if (daysUntilExpiration <= 1) {
        cout << "Your subscription expires within a day!" << endl;
        cout << "Renew now and save 20%!" << endl;
    } else if (daysUntilExpiration <= 5) {
        cout << "Your subscription expires in " << daysUntilExpiration << " days" << endl;
        cout << "Renew now and save 10%!" << endl;
    } else if (daysUntilExpiration <= 10) {
        cout << "Your subscription will expire soon. Renew now!" << endl;
    } else {
        cout << "You have an active subscription." << endl;
    }
    
    return 0;
}