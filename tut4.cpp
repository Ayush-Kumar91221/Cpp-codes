#include<iostream>

using namespace std;
int glo=6;
void sum(){
    int a;
    cout<<glo;
}
int main(){
    int glo=9;
    glo=78;
    int a=4, b=5;
    float pi=3.14;
    char c= 'd';
    bool is_true=true;
    cout<<"the value of a is "<<a<<".\nThe value of b is "<<b;
    cout<<"\nthe value of pi is"<<pi;
    sum();
    cout<<glo<<is_true;
    return 0;
}