#include<bits/stdc++.h>
using namespace std;

// forward declaration
class Complex;


class Calculator{
    public:
        int add(int a,int b){
            return (a+b);
        }
        int sumRealComplex(Complex ,Complex );
        int sumCompComplex(Complex, Complex);
        
};

class Complex
{
    int a, b;
    // individually declaring functions as friend
    // friend int Calculator:: sumRealComplex(Complex ,Complex );
    // friend int Calculator:: sumCompComplex(Complex ,Complex );

    // Ailter: Declaring the entire calculator class as friend
    friend class Calculator;
public:
    void setnumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    void printnumber()
    {
        cout << "Your number is " << a << " + " << b << "i";
    }
};

int Calculator:: sumRealComplex(Complex o1, Complex o2){
    return(o1.a+o2.a);
}

int main(){
    Complex o1,o2;
    o1.setnumber(2,4);
    o2.setnumber(5,7);
    Calculator calc;
    int res =calc.sumRealComplex(o1,o2);
    cout<<"the sum of real part of o1 and o2 is "<<res<<endl;
    return 0;
}