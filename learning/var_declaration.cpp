#include <iostream>
using namespace std;

// global variable declaration --> can be accessed by any module in the program
char var;

// extern variable declaration --> it is already been allocated elsewhere
// linker will know when it is linked with another files
extern int a,b,c;
extern bool flag;

int main(){

    // local variable declaration
    int d;

    // variable definition
    int a,b,c;
    bool flag;

    // initialization
    a = 10;
    b = 20;
    d = 50;
    flag = true;
    var = 'n';

    cout << a << " " << b << " "<< flag << " "<< c << " "<< d << " " << var;
    return 0;
}