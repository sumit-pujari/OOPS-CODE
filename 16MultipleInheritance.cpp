#include<bits/stdc++.h>
using namespace std;

class engineer{
   public:
   string specialization;

   void work(){
    cout<<"I have specialization in "<<specialization<<endl;
   }
};

class youtuber{
    public:
    int subscribers;

    void containcreator(){
        cout<<"I have "<<subscribers<<" subscribers"<<endl;
    }
};

class CodeTeacher:public engineer,public youtuber{
    public:
    string name;

    CodeTeacher(string name,string specialization,int subscribers){
        this->name=name;
        this->specialization=specialization;
        this->subscribers=subscribers;
    }

    void display(){
        cout<<"My name is "<<name<<endl;
        work();
        containcreator();
    }
};

int main(){
    CodeTeacher c1("Sumit","C++",10000);
    c1.display();
    c1.work();
    c1.containcreator();
}