#include<iostream>
using namespace std;

int main(){
    // for (int i = 0; i < 4; i++)
    // {
        // cout<<i<<endl;
        // if(i==2){
            // break;
        // }
    // }
    for (int i = 0; i < 5; i++)
    {
        cout<<i<<endl;
        if (i==2){
            continue;/*this moves the cursor to the next iteration skipping the next codes*/
            cout<<"this is not 2"<<endl;
        }
    }
      
    return 0;
}