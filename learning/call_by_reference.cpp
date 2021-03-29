#include <iostream>
using namespace std;


void swap(int &a, int &b);

int main(){
    int x = 5,y = 10;

    cout << "before swapping :" << " x :" << x << "," <<" y :" << y << endl;

    swap(x,y);

    // no change in value
    cout << "after swapping :" << " x :" << x << "," <<" y :" << y << endl;;

    return 0;
}

void swap(int &a, int &b){
    int temp;

    temp = a;
    a = b;
    b = temp;

    return;
}