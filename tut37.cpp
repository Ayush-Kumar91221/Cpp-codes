#include <bits/stdc++.h>
using namespace std;
// base class
class Employee{
public:
    int id;
    float salary;
    Employee(int inpId)
    {
        id = inpId;
        salary = 34.0;
    }
    Employee(){}
};
// derived class syntax
/*class {{derived-class-name}} : {{visiblity-mode}}  {{base-class-name}}
{
    class members/methods/etc.....
}
1.private visiblity mode: public members of the derived class become privatre members of the derived class
2.public visiblity mode: public members of the derived class become public members of the derived class
3.private members of a base class are never inherited
*/

// creating a programmer class derived from Employee base class
class Programmer : Employee
{ // default visiblity mode is private
    public:
        Programmer(int inpId){
            id=inpId;
        }
    int LanguageCode = 9;
    void getdata(){
        cout<<id<<endl;
    }
};

int main()
{
    Employee harry(1), rohan(2);
    cout << harry.salary << endl;
    cout << rohan.salary << endl;
    Programmer skillf(1);
    cout<<skillf.LanguageCode<<endl;
    skillf.getdata();
    return 0;
}