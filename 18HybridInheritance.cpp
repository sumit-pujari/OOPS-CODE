#include<bits/stdc++.h>
using namespace std;

//sutdent          hierarchical+multiple
//boy
//girl
//male
//female

class student{
    public:
    void studentprint(){
        cout<<"I am a student"<<endl;
    }
};

class male{
    
    public:
    void boyprint(){
        cout<<"I am a male"<<endl; 
    }
};

class female{
    public:
    void girlprint(){
        cout<<"I am a female"<<endl;
    }
};

class boy:public student,public male{
    public:
    void print(){
        cout<<"I am a boy"<<endl;
    }
};

class girl:public student,public female{
    public:
    void print(){
        cout<<"I am a girl"<<endl;
    }
};



int main(){
    girl g1;
    g1.girlprint();
    g1.studentprint();
    g1.print();
}
