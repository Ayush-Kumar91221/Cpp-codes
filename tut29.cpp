#include<bits/stdc++.h>
using namespace std;

class Complex{
    int a,b;
    public:
    // creating a constructor
    // construcor is special member function with same name as of class.
    // It is automatically invoked whenever an object is created
    // it is used to initialise the objects of its class
        Complex(void);//constructor declaration
          void printnumber()
    {
        cout << "Your number is " << a << " + " << b << "i";
    }
};

Complex::Complex(void){//---->this is a default constructor as it takes no parameters
    a=0;
    b=0;
    // cout<<"hello world";
}

int main(){
    Complex c1,c2,c3;
    c1.printnumber();
    c2.printnumber();
    c3.printnumber();
    
    return 0;
}

//charecteristics of constructor

// 1. it should be declared in the public section of the class
// 2. they are automaticlly invoked whenever the object is created
// 3. they cnnot return vlues and have no return type
// 4. it can have default arguments
// 5. we cannnot refer to thieir address.
