#include<bits/stdc++.h>
using namespace std;

class point{
    int x,y;
    public:
        point(int a,int b){
            x=a;
            y=b;
        }
        void displayPoint(){
            cout<<"the point is ("<<x<<", "<<y<<")"<<endl;
        }
};
// create a function which takes two point and compute the distance between them 
int main(){
    point p(1,1);
    p.displayPoint();

    point q(4,6);
    q.displayPoint();
    return 0;
}