#include<bits/stdc++.h>
using namespace std;
class human{
    protected:
    string name;
    int age,weight;
};

class student:private human{                 //inheritance->is-a relationship->student is a human
    int roll_no,fees;
 
    // public:
    // void fun(string name,int age,int weight,int roll_no,int fees){
    //     this->name=name;
    //     this->age=age;
    //     this->weight=weight;
    //     this->roll_no=roll_no;
    //     this->fees=fees;
    // }

    // void display(){
    //     cout<<"Name: "<<name<<endl;
    //     cout<<"Age: "<<age<<endl;   
    //     cout<<"Weight: "<<weight<<endl;
    //     cout<<"Roll Number: "<<roll_no<<endl;   
    //     cout<<"Fees: "<<fees<<endl;
    // }

    public:
    student(string name,int age,int weight,int roll_no,int fees){
        this->name=name;
        this->age=age;
        this->weight=weight;
        this->roll_no=roll_no;
        this->fees=fees;
    }

    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;   
        cout<<"Weight: "<<weight<<endl;
        cout<<"Roll Number: "<<roll_no<<endl;   
        cout<<"Fees: "<<fees<<endl;
    }

    
};
int main(){
    student A("Sumit",20,60,12345,1000);
    A.display();
    // A.fun("Sumit",20,60,12345,1000);
    // A.display();
}




/*Base class  Child Class
 public       public        public
 public      protected     protected
 protected   protected     protected
 protected   private       private
 private     not inherited  not inherited*/
