#include<bits/stdc++.h>
using namespace std;
class customer{
    string name;
    int acc_no;
    int balance;
    
    public:
    customer(string name,int acc_no,int balance){
    this->name=name;
    this->acc_no=acc_no;
    this->balance=balance;
  }


  //copy constructor 
  /*& is for reference variable if it not used then it will create
   a new object and copy the value of A1 to A2 but if & is used then 
   it will not create a new object and copy the value of A1 to A2*/
  customer(customer &B){
    name=B.name;
    acc_no=B.acc_no;
    balance=B.balance;
  }

  void display(){
    cout<<name<<" "<<acc_no<<" "<<balance<<" "<<endl;;
  }
};

int main(){
    customer A1("Sumit",123,1000);
    A1.display();

    customer A2(A1); //copy constructor is called
    A2.display();

    customer A3=A1; //copy constructor is called
    A3.display();
}