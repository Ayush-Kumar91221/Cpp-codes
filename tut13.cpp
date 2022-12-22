#include<iostream>
using namespace std;

int main(){
    int marks[]={23,25,67,99};
    int mathmarks[4];
    mathmarks[0]=3478;
    mathmarks[1]=245;
    mathmarks[2]=378;
    mathmarks[3]=35;
    cout<<mathmarks[0]<<endl;
    cout<<mathmarks[1]<<endl;
    cout<<mathmarks[2]<<endl;
    cout<<mathmarks[3]<<endl;
    // arrays are editable.
    marks[2]=99;
    // for (int i = 0; i < 4; i++)
    // {
    //     cout<<marks[i]<<endl;
    // }
    // int i=0;
    // while (i<4)
    // {
    //     i++;
    //     cout<<marks[i]<<endl;
    // }
    // do
    // {
    //     i++;
    //     cout<<marks[i];
    // } while (i<4);
    // creating pointer for arrays 
    // pointer arithetic 
    // address new=address current+ i*sizeof( data type)
    int* p=marks;
    cout<<"the value of marks[0] is"<<*p<<endl;
    cout<<"the value of marks[1] is"<<*(p+1)<<endl;
    cout<<"the value of marks[2] is"<<*(p+2)<<endl;
    cout<<"the value of marks[3] is"<<*(p+3)<<endl;
    // better way
    cout<<*p++<<endl;
    cout<<*p++<<endl;
    cout<<*p++<<endl;
    cout<<*p++<<endl;
    return 0;
}