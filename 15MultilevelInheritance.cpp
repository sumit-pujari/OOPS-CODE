#include<bits/stdc++.h>
using namespace std;
class person{
    protected:
    string name;

    public:
    void introduce(){
        cout<<"My name is "<<name<<endl;
    }
};

class Emplyoee:public person{
     protected:
     int salary;

     public:
     void monthly_salary(){
        cout<<"My monthly salary is "<<salary<<endl;
     }
};

class manager:public Emplyoee{
    public:
    string dept; 

    manager(string name,int salary,string dept){
        this->name=name;
        this->salary=salary;
        this->dept=dept;
    }

    void work(){
        cout<<"I am working in "<<dept<<" department"<<endl;
    }

};

int main(){
    manager m1("Sumit",10000,"IT");
    m1.work();
    m1.introduce();
    m1.monthly_salary();
}