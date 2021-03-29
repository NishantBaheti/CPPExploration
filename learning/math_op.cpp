#include <iostream>
#include <cmath>
using namespace std;

int main(){

    short       s = 10;
    int         i = -1000;
    long        l = 10000000;
    float       f = 230.47;
    double      d = 200.34567;

    cout << "sin :" << sin(d) << endl;
    cout << "abs :" << abs(i) << endl;
    cout << "floar :" << floor(d) << endl;
    cout << "sqrt :" << sqrt(f) << endl;
    cout << "pow :" << pow(d,2) << endl;

    return 0;
}