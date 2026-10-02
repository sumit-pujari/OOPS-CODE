#include<bits/stdc++.h>
using namespace std;
class human{
    protected:
    string name;
    int age;

    public:
    human(string name,int age){
        this->name=name;
        this->age=age;
    }
};

class student:public human{
    int roll_no,fees;

    public:
    student(string name,int age,int roll_no,int fees):human(name,age){
        this->roll_no=roll_no;
        this->fees=fees;
    }
    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;   
        cout<<"Roll Number: "<<roll_no<<endl;   
        cout<<"Fees: "<<fees<<endl;
    }
};

int main(){
     student A("Sumit",20,12345,1000);
     A.display();
}