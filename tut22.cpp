#include<bits/stdc++.h>
// #include<string>
using namespace std;
class binary
{
private:
    string s;
    void chk_bin(void);

public:
    void read(void);
    void ones_compliment(void);
    void display(void);
};
void binary :: read(void){
    cout<<"enter a binary number"<<endl;
    cin>>s;
}

void  binary :: chk_bin(void){
     for(int i=0;i<s.length();++i){
        if(s.at(i)!='0' &&s.at(i)!='1'){
            cout<<"incorrect binary format"<<endl;
            exit(0);
        }
     }
}

void binary ::ones_compliment(void){
     chk_bin();
     for(int i=0;i<s.length();++i){
        if(s.at(i)=='1')
            {s.at(i)='0';}
        else{
        s.at(i)='1';
     }
     }

}

void binary::display(void){
    cout<<"displaying the binary number"<<endl;
     for(int i=0;i<s.length();++i){
        cout<<s.at(i);
     }
    cout<<endl;
}

int main(){
    // OOPs -Classes and Objects

    // Class --->extension of structures(in C)
    //              --->Members are public
    //              --->no methods
    // classes --->structures + more
    // classes --->can have methods and properties
    // classes-->can make a few members private and public
    // structures in c++ are typedefed
    // you can declare objects along with class definition like
     /*class employee{
        // class definition
     } harry, rohan, lovish*/ 
    //  harry.salary makes no sense if salary is private

    //nesting of functions
    binary b;
    b.read();
    // b.chk_bin;---->genetates a error because its a private function
    b.display();
    b.ones_compliment();
    b.display();
    return 0;
}