#include <iostream>
#include <cstring>
using namespace std;

void print_employee( struct Employee emp );

typedef struct Employee{
    char first_name[16];
    char last_name[16];
    int age;
} Employees;

int main(){
    
    Employees emp;
    Employees p_emp;

    strcpy(emp.first_name, "Nishant");
    strcpy(emp.last_name, "Baheti");
    emp.age = 16;

    strcpy(p_emp.first_name, "john");
    strcpy(p_emp.last_name, "doe");
    p_emp.age = 20;


    print_employee(emp);
    print_employee(p_emp);
    return 0;
}


void print_employee(struct Employee emp){
    cout << emp.first_name << " " << emp.last_name << " " << emp.age << endl;
}