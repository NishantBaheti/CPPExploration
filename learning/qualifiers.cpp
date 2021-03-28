#include <iostream>
using namespace std;

int main(){
    const int A = 10;
    volatile int B = 20;

    cout << A << endl << B << endl;
    return 0;
}