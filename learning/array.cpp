#include <iostream>
using namespace std;

int main(){
    
    double array1[5] = {1000.0, 2.0, 3.4, 17.0, 50.0};


    for(int i=0;i<5;i++){
        cout << array1[i] << endl;
    }

    double array2[] = {1,2,3,4,5,6,7,8,9,10};
    int len = sizeof(array2)/sizeof(array2[0]);

    for(int i =0;i<len;i++){
        cout << array2[i] << endl;
    }
    return 0;
}