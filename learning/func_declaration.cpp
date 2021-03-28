#include <iostream>
using namespace std;

// function declaration
int func();

int main(){
    // calling function 
    int a = func();
    cout << a;
    return 0;
}

// function definition
int func() {
    return 100;
}