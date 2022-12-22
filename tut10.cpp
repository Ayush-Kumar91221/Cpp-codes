#include<iostream>
using namespace std;

int main(){
    /*loops in c++
    there are 3 loops in c++
    1.for loop
    2.while loop
    3.do while loop*/
    // for  loop 
    // syntax: for (initialisation,condition,updation)
    // {
        // loop body
    // }
    // for (int i = 1; i <=40; i++)
    // {
    //     cout<<i<<endl;
    // }
    // while (/* condition */)
    // {
    //     /* code */
    // }
    int i=1;
    while (i<=40)
    {
       cout<<i<<endl;
       i++; 
    }
    do
    {
       cout<<i<<endl;
       i++; 
    } while (false);
    // this runs 1st time without cheecking condition. thus atleast 1 output is printed no matter condition is true or false
    return 0;
}