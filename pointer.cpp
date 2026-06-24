#include <iostream>
using namespace std;
int main(){
    int a=3;
    int* b=&a;
    cout<<"The address of a is :"<<b<<endl;
    // & is used as the address of the operator
    cout<<"The address of a is :"<<&a<<endl;
    
    // * is used as the at that pointer 
    cout<<"The value of variable whose address is b is :"<<*b<<endl;
    return 0;
}