#include<iostream>
using namespace std;
typedef struct employee
{
    int eId;
    char favChar;
    float salary;
}ep;
union money
{
    int  rice;
    char car;
    float pounds;
};/*union allow only one of the many inputs*/

int main(){
    enum meal{ breakfast,lunch,dinner};
    meal m2=lunch;
    cout<<(m2==2);
    cout<<breakfast;
    cout<<lunch;
    cout<<dinner;

    ep harry;
    harry.eId=1;
    harry.favChar='c';
    harry.salary=1200000;
    cout<<"the value is "<<harry.eId<<endl;
    cout<<"the value is "<<harry.favChar<<endl;
    cout<<"the value is "<<harry.salary<<endl;

    union money m1;
    m1.rice=34;
    m1.car='c';
    cout<<m1.rice<<endl;/*this returns garbage value as you have changed m1 to car */
    cout<<m1.car<<endl;
    return 0;
}