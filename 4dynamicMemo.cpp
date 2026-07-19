#include<bits/stdc++.h>
using namespace std;
class student{
    public:
    string name;
    int age,rollno;
    string grade;
};

int main(){
    student *s1=new student;
    (*s1).name="Sumit";  //s1->name="Sumit";  //s1->name is also valid
    (*s1).age=21;
    (*s1).rollno=12;
    (*s1).grade="A+";

    cout<<(*s1).name<<endl;
    cout<<(*s1).age<<endl;
    cout<<(*s1).rollno<<endl;
    cout<<(*s1).grade<<endl;
}