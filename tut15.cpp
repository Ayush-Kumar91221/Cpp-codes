#include<iostream>
using namespace std;
// function prototype
// type function-name(arguments)
// you can avoid function prototypes if you weite the function before main
int sum(int a,int b);
// int sum(int a, b);----not acceptable
// int sum(int ,int);---Acceptable
void g();
int main(){
    int num1,num2;
    cout<<"enter a number ";
    cin>>num1;
    cout<<"enter another number ";
    cin>>num2;
    cout<<"the sum of the two numbers is "<<sum(num1,num2);
    g();
    return 0;
    
    // num1 an num2 are actual parameters
}
int sum(int a,int b){
    // formal parameters a and b are  taking values from actual parameters num1 and num2
    int c=a+b;
    return c;
}
void g(){
    cout<<"hello, Good morning";
}