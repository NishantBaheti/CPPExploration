#include <iostream>
using namespace std;


//  declaring literal constants with #define

#define LENGTH 10
#define WIDTH 50
#define NEWLINE '\n'

int main(){

    // declaring literal constants with const

    const int QUANTITY = 100;

    int area, total;
    area = LENGTH * WIDTH;
    total = QUANTITY * area;
    
    cout << "area :" << area << NEWLINE;
    cout << "total :" << total;
    return 0;
}