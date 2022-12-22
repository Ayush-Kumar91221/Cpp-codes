#include<bits/stdc++.h>
using namespace std;

class number{
    int a;
    public:
         number(){
            a=0;
         }
        number (int num){
            a=num;
        }
        // when no copy constructor is found the compiler supplies one for each class 
        number (number &obj){
            cout<<"Copy constructor called"<<endl;
            a=obj.a;
        }
        
        void display(){
            cout<<"The number for this object is "<<a<<endl;
        }
};

int main(){
    number x,y,z(45),z2;
    x.display();
    y.display();
    z.display();

    // z1 shoild exacltly resemble z or x or y
    number z1(z);
    z1.display();
    z2=x;// copy constructor not called
    z2.display();
    number z3=z;//copy constructor will be invoked
    z3.display();
    return 0;
}