#include<iostream>
using namespace std;

int factorial(int n){
    if (n<=1) {
        return 1;
    }
    return n*factorial(n-1);
}
int fibonacci(int n){
    if (n<2){
        return 1;
    }
    return fibonacci(n-1)+ fibonacci(n-2);
}
int main(){
    int a;
    cout<<"enter a number: ";
    cin>>a;
    cout<<a<<"! = "<<factorial(a)<<endl;
    int  fib;
    cout<<"which term of fibonacci series do you want? ";
    cin>> fib;
    cout<<"The "<<fib<<"th term of fibbonaci series is "<<fibonacci(fib);
    return 0;
}