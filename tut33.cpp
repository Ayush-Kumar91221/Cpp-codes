#include<bits/stdc++.h>
using namespace std;

class BankDeposit{
    int principal;
    int years;
    float interestRate;
    float returnValue;

    public:
        BankDeposit(){}
        BankDeposit(int p,int y,float r);//r can be like 0.04
        BankDeposit(int p,int y,int r);//r canbe value like 14
        void show(void);
};

BankDeposit:: BankDeposit(int p,int y,float r){
    principal=p;
    years=y;
    interestRate=r;
    returnValue=principal;
    for (int i=0;i<y;++i){
        returnValue*=(1+interestRate);
    }
}
BankDeposit:: BankDeposit(int p,int y,int r){
    principal=p;
    years=y;
    interestRate=float(r)/100;
    returnValue=principal;
    for (int i=0;i<y;++i){
        returnValue*=(1+interestRate);
    }
}
 void BankDeposit::show(){
    cout<<endl<<"principal amount was "<<principal<<endl
    <<". REturn value after "<<years
    <<" is "<<returnValue<<endl;
}
int main(){
    BankDeposit bd1,bd2,bd3;
    int p, y;
    float r;
    int R;
    cout<<"enter the value of p, y and r ";
    cin>>p>>y>>r;
    bd1=BankDeposit(p,y,r);
    bd1.show();

    cout<<"enter the value of p, y and R ";
    cin>>p>>y>>R;
    bd2=BankDeposit(p,y,R);
    bd2.show();

    bd3.show();//this will have generated error regardless you write the show function or not. if you make constructor then it must suit all cases otherwise it will generate an error 

    return 0;
}