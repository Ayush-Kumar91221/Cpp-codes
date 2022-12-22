#include<iostream>
#include<iomanip>
using namespace std ;

int main(){
    // int a=34;
    // cout<<"the value of a was "<<a;
    // a=45;
    // cout<<"the value of a is "<<a;
    // const int b=4;
    // cout<<"the value of b was "<<b;
    // b=56;/*this is red cause  you cannot change b*/
    // cout<<"the value of b is "<<b;
    int a=3,b=412345,c=17188;
    cout<<"The value of a without setw is: "<<a<<endl;
    cout<<"The value of b without setw is: "<<b<<endl;
    cout<<"The value of c without setw is: "<<c<<endl;
    // setw makes the print right aligned. the number in parenthesis indicates the total space of textbox.if one exceeds it then it practialy makes no differnce. 
    cout<<"The value of a is: "<<setw(4)<<a<<endl;
    cout<<"The value of b is: "<<setw(4)<<b<<endl;
    cout<<"The value of c is: "<<setw(4)<<c<<endl;
    // ************operator precedence***************
    // int a=3,b=4;
    // int c=a*5+b+45-67;
    // cout<<c;
    return 0;
}