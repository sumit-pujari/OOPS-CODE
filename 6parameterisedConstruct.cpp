#include<bits/stdc++.h>
using namespace std;
class customer{
    string name;
    int acc_no;
    int balance;
    
    public:
    
    //default constructor
    customer(){
        //cout<<"constructor called"<<endl;
        name="Sumit";
        acc_no=123;
        balance=1000;
    }
    
    //parameterised constructor
    customer(string name,int acc_no,int balance){
        this->name=name;
        this->acc_no=acc_no;
        this->balance=balance;
    }
    
    
    //constructor overloading
    //when constructor with different parameter are used->constructor overloading
    customer(string a,int b){
        name=a;
        acc_no=b;
        balance=3000;
    }
    
    void display(){
        cout<<name<<" "<<acc_no<<" "<<balance<<" "<<endl;;
    }
};

int main(){
    customer A1;
    customer A2("Pujari",124,2000);
    customer A3("XYZ",125);
    A1.display();
    A2.display();
    A3.display();
}