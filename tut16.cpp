#include<iostream>
using namespace std;

int sum(int a,int b){
    // formal parameters a and b are  taking values from actual parameters num1 and num2
    int c=a+b;
    return c;
}
/*HEEHE!!! no swap yo forgot that swapping does ocurr inside void function. The value of a and b are only copied down in swap and not retained after the function */
void swap(int a,int b){
    int temp=a;
    a=b;
    b=temp;
}
// call by reference using pointers
void swapPointer(int* a,int* b){
    int temp=*a;
    *a=*b;
    *b=temp;/*this function swaps the values at addresses of a and b*/
}
// call by reference using refernce variables
int & swapReferenceVar(int &a,int &b){//the & is  used so that we set the value at reference of a. Simple use without & will mean we ae saying 4=766 where 4 is a variable which cannot be as a variable must start with a alpahbet
    int temp=a;
    a=b;
    b=temp;
    return a;
    // also note here we are supplying a and b and not &a and &b
}

int main(){
    int x=4,y=5;
    cout<<"The sum of 4 and 5 is  "<<sum(x,y);
    cout<<"the value of a is "<<x<<endl<<"the value of b is "<<y<<endl;
    // swap(x,y);this doesn't work
    // swapPointer(&x,&y);this will swap a and b using  pointers
    swapReferenceVar(x,y)=766;//this  will set a to 766
    cout<<"the value of a is "<<x<<endl<<"the value of b is "<<y<<endl;
    return 0;
}