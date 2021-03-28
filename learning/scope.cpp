#include <iostream>

// function declaration
void func(void);

// extern variable declaration --> it is already been allocated elsewhere
// linker will know when it is linked with another files
// The extern storage class is used to give a reference of a global variable that is visible to ALL the program files. 
// When you use 'extern' the variable cannot be initialized as all it does is point the variable name at a storage location that has been previously defined.
extern void func2();

static int count = 10; // Global variable 


int main(){

    // auto is default for all
    auto int a = 1; 

    // The register storage class is used to define local variables that should be stored in a register instead of RAM. This means that the variable has a maximum size equal to the register size (usually one word) and can't have the unary '&' operator applied to it 
    // should be used only for quick access like counters
    register int counter = 0;

    while(count--){
        func();
    }

    return 0;
}

void func(void){
    static int i = 5; // local static variable 
    i++;

    std::cout << "i value is :" << i;
    std::cout << " and count is :" << count << std::endl;
}


