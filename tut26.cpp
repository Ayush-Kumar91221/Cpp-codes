#include <bits/stdc++.h>
using namespace std;
class Complex
{
    int a, b;

public:
    void setnumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    // below line means that the non member sum complex function is allowed to do anything with its private section
    friend Complex sumcomplex(Complex o1,Complex o2);
    void printnumber()
    {
        cout << "Your number is " << a << " + " << b << "i";
    }
};
Complex sumcomplex(Complex o1, Complex o2)
{
    Complex o3;
    o3.setnumber((o1.a + o2.b), (o1.b + o2.b));
    return o3;
}

int main()
{
    Complex c1, c2, sum;
    c1.setnumber(1, 4);
    c1.printnumber();
    c2.setnumber(5, 8);
    c2.printnumber();

    sum = sumcomplex(c1, c2);
    return 0;
}
/*
Properties of friend functions
1. Not in the scope of class
2. Since it is not in the scope of private class, it cannnot be called from the object of that class. c1.sumcomplex () ==invalid
3. Can be invoked without the helop of any object
4. Usually contains the objects as arguments
5. Can be declared inside public or private section of the class
6. It cannot access the members directly by their names and needs object_name.member_name to access any member.
*/