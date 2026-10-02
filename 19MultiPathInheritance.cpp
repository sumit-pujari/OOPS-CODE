#include<bits/stdc++.h>
using namespace std;

class human{
    public:
    string name;

    void display(){
        cout<<"My name is "<<name<<endl;
    }
};

class engineer:public virtual human{     ///without virtual ->confusion in name of human class->ambiguity->error
   public:
   string specialization;

   void work(){
    cout<<"I have specialization in "<<specialization<<endl;
   }
};

class youtuber:public virtual human{
    public:
    int subscribers;

    void containcreator(){
        cout<<"I have "<<subscribers<<" subscribers"<<endl;
    }
};

class CodeTeacher:public engineer,public youtuber{
    public:
    int salary;

    CodeTeacher(){
          
    }
    

    CodeTeacher(string name,string specialization,int subscribers,int salary){
        this->name=name;
        this->specialization=specialization;
        this->subscribers=subscribers;
        this->salary=salary;
    }

};

int main(){
    CodeTeacher c1;
    c1.display();
}