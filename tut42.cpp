#include<iostream>
#include<math.h>
using namespace std;
/*
Create 2 classes:
    1. SimpleCalculator - Takes input of 2 numbers using a utility function and performs +, -, *, / and displays the results using another function.
    2. ScientificCalculator - Takes input of 2 numbers using a utility function and performs any four scientific operations of your choice and displays the results using another function.

    Create another class HybridCalculator and inherit it using these 2 classes:
    Q1. What type of Inheritance are you using?
    Q2. Which mode of Inheritance are you using?
    Q3. Create an object of HybridCalculator and display results of the simple and scientific calculator.
    Q4. How is code reusability implemented?
*/
class SimpleCalculator{
    int a;
    int b;
    public:
        SimpleCalculator(){};
        SimpleCalculator(int x1,int x2){
            a=x1;
            b=x2;
        }
        void SimpleCalc(){
            cout<<"The value of " <<a<<" + "<<b<< " is "<<a+b<<endl;
            cout<<"The value of " <<a<<" * "<<b<< " is "<<a*b<<endl;
            cout<<"The value of " <<a<<" - "<<b<< " is "<<a-b<<endl;
            cout<<"The value of " <<a<<" % "<<b<< " is "<<a%b<<endl;
        }
};
class ScientificCalculator{
    int c;
    public:
        ScientificCalculator(){};
        ScientificCalculator(int x1){
            c=x1;
        }
        void ScientificCalc(){
            cout<<"The value of cos("<<c<<") is "<<cos(c)<<endl;
            cout<<"The value of sin("<<c<<") is "<<sin(c)<<endl;
            cout<<"The value of exp("<<c<<") is "<<exp(c)<<endl;
            cout<<"The value of tan("<<c<<") is "<<tan(c)<<endl;
        }
};

class Derived: public SimpleCalculator, public ScientificCalculator{
    public:
        Derived(){};
        Derived(int a,int b, int c): ScientificCalculator(c),SimpleCalculator(a,b){}
        void display(){
            SimpleCalc();
            ScientificCalc();
        }
};
int main(){
    SimpleCalculator simple(3,4);
    simple.SimpleCalc();

    ScientificCalculator scientfic(3);
    scientfic.ScientificCalc();

    Derived calculate(4,5,6);
    calculate.display();

    return 0;
}