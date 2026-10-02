#include<bits/stdc++.h>
using namespace std;
class student{
    private:
    string name;
    int age,rollno;
    string grade;
    
    //fuction getter and setter
    public:
    void setname(string s){
        // if(s.size()==0){
        //     cout<<"Invalid name"<<endl;
        // }
        name=s;
    }
    
    void setage(int a){
        age=a;
    }
    
    void setrollno(int r){
        rollno=r;
    }
    
    void setgrade(string s){
        grade=s;
    }
    
    void getname(){
        cout<<name<<endl;
    }
    void getage(){
        cout<<age<<endl;
    }
    void getrollno(){
        cout<<rollno<<endl;
    }
    void getgrade(){
        cout<<grade<<endl;
    }
     
};

int main(){
    student s1;
    s1.setname("Sumit");
    s1.setage(21);
    s1.setrollno(12);
    s1.setgrade("A+");
    
    s1.getname();
    s1.getage();
    s1.getage();
    s1.getgrade();
}