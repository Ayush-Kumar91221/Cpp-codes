#include<bits/stdc++.h>
using namespace std;

class shop{
    int itemId[100],itemPrice[100],counter;
    public:
        void initCounter(void){counter=0;}
        void setPrice(void);
        void displayPrice(void);
};
void shop:: setPrice(void){
    cout<<"Enter the Id for item no. "<<counter+1<<endl;
    cin>>itemId[counter];
    cout<<"Enter the item price "<<endl;
    cin>>itemPrice[counter];
    counter++;
}
void shop::displayPrice(void){
    for(int i=0;i<counter;++i)
    cout<<"the price of the item with Id "<<itemId[i]<<" is "<<itemPrice[i]<<endl;
}
int main(){
    shop dukkan;
    dukkan.initCounter();
    dukkan.setPrice();
    dukkan.setPrice();
    dukkan.setPrice();
    dukkan.displayPrice();
    return 0;
}