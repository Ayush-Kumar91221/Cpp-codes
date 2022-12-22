#include<iostream>
using namespace std;

int main(){
    // pointer is a data type which holds the address of  other data types 
    int a=3;
    int* b=&a;//this int* makes a pointer variable.&a is address of a
    // & is (address of) operator
    // * is (value at) dereference operator
    cout<<"the address of a is"<<&a<<endl;
    cout<<"the address of a is"<<b<<endl;
    cout<<"the value at address b is"<<*b;
    // pointer to pointer 
    int** c=&b;
    cout<<"the address of b is"<<&b<<endl;
    cout<<"the address of a is"<<c<<endl; 
    cout<<"the value at address c is"<<*c<<endl;
    cout<<"the value at value_at(value_at(c)) is"<<**c<<endl;
    return 0;
}