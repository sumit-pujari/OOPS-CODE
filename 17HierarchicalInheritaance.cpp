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
    
    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;   
    }

    void work(){
        cout<<"I am working"<<endl;
    }
};

class Teacher:public human{
    int salary;

    public:
    Teacher(string name,int age,int salary):human(name,age){
        this->name=name;
        this->age=age;
        this->salary=salary; 
    }

    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;   
        cout<<"Salary: "<<salary<<endl;
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
    Teacher T("Rohit",30,10000);
    A.display();
    T.display();
}