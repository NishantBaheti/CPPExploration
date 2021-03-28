#include <iostream>
using namespace std;

int main(){

    enum color1 { red=6, blue, green } c;
    enum alpha { x, y, z } d;
    // red is 6 so blue will be plus one to the previous one
    c = blue;
    d = y;
    cout << c << endl;
    cout << d;
    return 0;
}