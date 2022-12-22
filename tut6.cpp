// there are two types of header files:
// 1.system header files:it comes with the COMPILER  
// 2.user defined header files:it is written by the programmer
#include<iostream>
#include "this.h"

using namespace std;
int main(){
    cout<<"this  is a hello world program"<<endl;/* endl is used to create new line when you can't use \n*/
    int a=4,b=5;
    cout<<"\nthe value of a+b is: "<<a+b;
    cout<<"\nthe value of a-b is: "<<a-b;
    cout<<"\nthe value of a*b is: "<<a*b;
    cout<<"\nthe value of a/b is: "<<a/b;
    cout<<"\nthe value of a%b is: "<<a%b;
    cout<<"\nthe value of a++ is: "<<a++;/*this changes a=4 to a=5 but prints the before value of a*/
    cout<<"\nthe value of a-- is: "<<a--;/*this changes a=5 to a=4 but prints the before value of a*/
    cout<<"\nthe value of ++a is: "<<++a;/*this changes a=4 to a=5 but prints the after value of a*/
    cout<<"\nthe value of --a is: "<<--a;/*this changes a=5 to a=4 but prints the after value of a*/
    // output of any operation on integers in c++ is always an integer thus a/b=0
    // Assignment operators:- used to assign valuse to variables
    // e.g. int a=4,b=6;
    // char d='c';

    // comparison operator:
     cout<<"the value of a==b is "<<(a==b)<<endl;
     cout<<"the value of a<b is "<<(a<b)<<endl;
     cout<<"the value of a>b is "<<(a>b)<<endl;
     cout<<"the value of a<=b is "<<(a<=b)<<endl;
     cout<<"the value of a>=b is "<<(a>=b)<<endl;
     cout<<"the value of a<b and a==b is"<<((a<b)&&(a==b));/*this && is logical operator 'and'*/
     //similarly || is 'or',! is 'not'

}
/*
there are 2  types of header files:
1. System header files- It comes wth the compiler.
2. user defined header files: it is written by the  programmmer*/