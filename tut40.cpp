/*
Notes:
If we are inheriting B from A and C from B[A--->B--->C]
1.A is the base class for B and B is the base class for C.
2.A--->B--->C is called the path of inheritence.
*/

#include<iostream>
using namespace std;

class student{
    protected:
        int roll_number;
    public:
        void set_roll_number(int);
        void get_roll_number(void);
};
void student::set_roll_number(int r){
    roll_number=r;
}
void student::get_roll_number(void){
    cout<<"The roll number is "<<roll_number<<endl;
}

class Exam:public student{
    protected:
        float physics;
        float maths;
    public:
        void set_marks(float,float);
        void get_marks();       
};

void Exam::set_marks(float m1,float m2){
    maths=m1;
    physics=m2;
}
void Exam::get_marks(){
    cout<<"The marks in mathematics are :"<<maths<<endl;
    cout<<"The marks in physics are :"<<physics<<endl;
}

class Result:public Exam{
    float percentage;
    public:
        void display(){
            get_roll_number();
            get_marks();
            cout<<"The percentage marks are "<<(maths+physics)/2<<"%\n";
        }
};

int main(){
    Result Ayush;
    Ayush.set_roll_number(22074008);
    Ayush.set_marks(99.0,98.9);
    Ayush.display();
    return 0;
}