#include<bits/stdc++.h>
using namespace std;

class Base {
    int data1 ;
    public:
        int data2;
        void setData();
        int getdata1();
        int getdata2();
};

void Base :: setData(void){
    data1=10;
    data2=20;
}

int Base ::getdata1(void){
    return data1;
}

int Base ::getdata2(void){
    return data2;
}

class derived: public Base{
    int data3;
    public:
        void process();
        void display();

};

void derived:: process(){
    data3=data2=getdata1();
}

void derived:: display(){
    cout<<"values of data 1 is "<<getdata1()<<endl;
    cout<<"values of data 2 is "<<data2<<endl;
    cout<<"values of data 3 is "<<data3<<endl;
}

int main(){
    derived der;
    der.setData();//if you derive it privately then you won't be able to use it as it will then be a private function of the class derived. You have to use it inside another function in class derived and use that function in public type
    der.process();
    der.display();
    return 0;
}
