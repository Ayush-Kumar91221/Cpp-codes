#include<iostream>
using namespace std;

int main(){
    int age;
    cout<<"Tell me your age: ";
    cin>>age;
    // if(age<18){
    //     cout<<"you cannot come to the party"<<endl;
    // }
    // else if(age==18){
    //     cout<<"you can come to the party butare not allowed to drink";
    // }
    // else{
    //     cout<<"you can come to the party";
    // }
    // return 0;
    // // switch case statement
    switch (age)
    {
    case 18:
        /* code */
        cout<<"you are 18";
        break;
    case 22:
        cout<<"you are 18";
        break;
    case 1:
        cout<<"you are 18";
        break;
    default:
        cout<<"no special cases";
        // break;
    }
    return 0;
//if you dont add break then it will check all switches
}