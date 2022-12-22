#include<bits/stdc++.h>
using namespace std;

// destuctor never takes an argument nor does return any value
int count =0;
class num{
    public:
        num(){
            count++;
            cout<<"this is the time when constructor is calledfor object number"<<count<<endl;
        }
        ~num(){
            cout<<"this is the time when my destructor is called for object number "<<count<<endl;
            count--;
        }
};
int main(){
    cout<<"we are inside our main function"<<endl;
    cout<<"creating first object n1"<<endl;
    num n1;
    {
        cout<<"entering this block";
        cout<<"creating two more objects"<<endl;
        num n2,n3;
        cout<<"exiting main block"<<endl;
    }
    cout<<"back to the main function"<<endl;

    return 0;
}
// dont worry this program is correct and not wrong. its just that vs code thinks we might define a count inside our class so it gives us warnings