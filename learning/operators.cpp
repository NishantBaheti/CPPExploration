#include <iostream>
int main(){

    int a = 2;

    std::cout << "a++ " << a++ << std::endl;
    std::cout << "++a " << ++a << std::endl;

    // comma operator
    int i, j;
    j = 10;
    i = (j++, j+100, 999+j);
    std::cout << i << std::endl;

    // conditional operator
    int x, y = 10;
    x = (y < 10) ? 30 : 40;
    std::cout << "value of x: " << x << std::endl;

    return 0;
}