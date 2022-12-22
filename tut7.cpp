#include <iostream>
using namespace std;

int c=45;

int main()
{
    int a, b;
    cout << "enter the value of a:";
    cin >> a;
    cout << "enter the value of b:";
    cin >> b;
    // c = a + b;
    // cout << "the value of c is " << c;
    // cout << "the global c is" << ::c;//why is this global not running!!!!
    // float d = 34.4;
    // long double e = 34.4;
    // // 34.4 is passed as double .To make it floating point we write 34.4f. To parse it as a long double use 34.4l

    // cout << "the value of d is " << d << endl;
    // cout<< "the value of e is " << e << endl;
    // cout<<"the size of 34.4l is  "<<sizeof(34.4l)<<endl;
    // cout<<"the size of 34.4f is  "<<sizeof(34.4f)<<endl;
    // ***********reference variable******************
    float x= 455;
    cout<<x<<endl;
    float & y=x;
    cout<<y<<endl;
    // // ******************typecasting****************
    // int a=45;
    // float b =34.55;
    // cout<<"the value of a is "<<float(a)<<endl;
    // cout<<"the value of b is "<<int(b)<<endl;/*this deletes decimal not round off it
    cout<<"the expression is "<<a+b<<endl;
    cout<<"the expression is  "<<a+int(b)<<endl;
    return 0;
}