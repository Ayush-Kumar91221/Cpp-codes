#include<bits/stdc++.h>
using namespace std;
class Complex
{
    int a,b;
    public:
        Complex(int,int);//constructor declaration
        void printnumber()
    {
        cout << "Your number is " << a << " + " << b << "i"<<endl;
    }

};

Complex::Complex(int x,int y){//---->this is a parameterised constructor as it takes 2 parameters
    a=x;
    b=y;
    // cout<<"hello world";
}

int main(){
    // imolicit call
    Complex a(4,6);

    // explicit call
    Complex b= Complex(5,7);

    a.printnumber();
    b.printnumber();
    return 0;
}