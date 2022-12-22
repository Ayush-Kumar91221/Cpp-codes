/*
For a protected member:
                         public derivation          private derivation      protected derivation
1.private members           not inherited            not inherited           not inherited
2.Public members            public                   private                 protected
3.Protected members         protected                private                 protected
*/\

#include<bits/stdc++.h>
using namespace std;

class base{
    protected:
        int a;
    private:
    int b;
};

class derived: protected base{
}; 

int main(){
    base c;
    derived d;
    //cout<<d.a;//can't be accessed as its protected
    //cout<<c.a;//can't be accessed as its protected
    return 0;
}