#include<bits/stdc++.h>
using namespace std;
class employee{
    private:
        int id;
        static int count;// static variables have default value as zero
    public:
        void setData(void){
            cin>>id;
            count++;
        }
        void getData(void){
            cout<<"the id of this employee is"<<id<<"and this is employee number "<<count<<endl;
        }
        static void getcount(void){
            // cout<<id;throws an error as you can only use static variables in static functions 
            cout<<"the value of count is "<<count;
        }

};

int employee:: count=100;

int main(){
    // count is the static data member of the class employee
    employee harry ,rohan,lovish;
    // harry.id=1; cannnot do this as id and count are private 
    // harry.count=1;cannnot do this as id and count are private  
    harry.setData();
    harry.getData();

    employee::getcount();

    harry.setData();
    harry.getData();

    employee::getcount();
    harry.setData();
    harry.getData();


    return 0;
}