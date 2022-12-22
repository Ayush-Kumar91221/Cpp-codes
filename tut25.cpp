// #include<bits/stdc++.h>
// using namespace std;

// class employee{
//     int id;
//     int salary;
//     public:
//         void setId(void){
//             salary=122;
//             cout<<"enter thee id of employee";
//             cin>>id;
//         }

//         void getId(void){
//               cout<<"the id of this employee is "<<id<<endl;
//         }
// };

// int main(){
//     // employee harry, lovish,rohan ,shruti;
//     // harry.setId();
//     // harry.getId();

//     employee fb[4];
//     for(int i=0;i<4;++i){
//         fb[i].setId();
//         fb[i].getId();
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

class Complex
{
    int a;
    int b;

public:
    void setdata(int v1, int v2)
    {
        a = v1;
        b = v2;
    }

    void setDataBySum(Complex o1, Complex o2)
    {
        a = o1.a + o2.a;
        b = o1.b + o2.b;
    }
    void printNumber(void){
        cout<<"Your complex number is "<<a<<"+i"<<b<<endl;
    }
};
int main()
{
    Complex c1, c2, c3;
    c1.setdata(1, 2);
    c1.printNumber();

    c2.setdata(3, 4);
    c2.printNumber();

    c3.setDataBySum(c1, c2);
    c3.printNumber();

    return 0;
}