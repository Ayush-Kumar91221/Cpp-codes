#include <iostream>
using namespace std;
inline int product(int num1,int num2){//inline functions are calculated by replacing the function in main  to th code of it itself.dont use  inline function when you have static data, recursions, long functions. this makes it faster.
    static int c=0;//this executes only once  no matter ow many times you call the function.next time this function is run it will retain its value
    c+=1;
    return num1*num2+c;
}
int moneyRecieved(int principal, float factor=1.04){
    return principal*factor;
}
int main(){
    int a,b,money;
    cout<<"enter a number: ";
    cin>>a;
    cout<<"enter another number";
    cin>>b;
    cout<<"the product of two numbers is "<<product(a,b)<<endl;
    cout<<"enter a number: ";
    cin>>money;
    cout<<"if u have Rs."<<money<<"in your bank account, you will recieve "<<moneyRecieved(money)<<"in one year"<<endl;
    cout<<"if you are a VIP and have Rs."<<money<<"in your bank account, you will recieve"<<moneyRecieved(money,1.1)<<"in one year";

    return 0;
}