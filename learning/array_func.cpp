#include <iostream>
using namespace std;

void calc_avg(int arr[], int size){
    int sum = 0;
    for(int i =0;i<size;i++){
        sum += arr[i];
    }

    double avg = sum / size;

    cout << "Average :" << avg << endl;
    return;
}

int main(){

    int array[10] = {1000,5,2,1,6,7,8,9,45,4};

    calc_avg(array,10);
    return 0;
}