#include <iostream>
using namespace std;

void swap(int *x, int *y);

int main(){
    int x = 5,y = 10;

    cout << "before swapping :" << " x :" << x << "," <<" y :" << y << endl;

    swap(x,y);

    // no change in value
    cout << "after swapping :" << " x :" << x << "," <<" y :" << y << endl;;

    return 0;
}

void swap(int *x, int *y){
    int temp;

    temp = *x;
    *x = *y;
    *y = temp;

    return;
}