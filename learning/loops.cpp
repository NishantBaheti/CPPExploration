#include <iostream>
using namespace std;


int main(){

    int counter1 = 10;
    int counter2 = 10;
    int counter3 = 10;
    int counter4 = 10;
    
    while (counter1--){
        cout << "While :" << counter1 << endl;

        if(counter1 == 3){
            break;
        }
    }

    for(int i=1;i<= counter2; i++){
        if(i == 6){
            cout << "for before continue:" << i << endl;
            continue;
            cout << "for after continue:" << i << endl;
        }
        cout << "for :" << i << endl;
    }

    do{
        cout << "Do While :" << counter3 << endl;
    } while( counter3--);


    goto_statmnt:while(counter4--){
        cout<< "While with goto :" << counter4 << endl;

        if(counter4 == 5){
            cout << "going to goto" << endl;
            goto goto_statmnt;
        }
    }

    return 0;
}