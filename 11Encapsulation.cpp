#include<bits/stdc++.h>
using namespace std;
class customer{
    string name;
    int acc_no,balance;        ///not direct accessible ->hiding data->binding data with function->encapsulation

    public:

    customer(string name,int acc_no,int balance){
        this->name=name;
        this->acc_no=acc_no;
        this->balance=balance;
    }

    void deposite(int amount){
        if(amount>0){
            balance+=amount;
        }
    }

    void withdraw(int amount){
        if(amount>0 && amount<=balance){
            balance-=amount;
        }
    }

    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Account Number: "<<acc_no<<endl;
        cout<<"Balance: "<<balance<<endl;
    }
};

int main(){
    customer c1("Sumit",12345,1000);
    customer c2("Rohit",12346,2000);
    customer c3("Ankit",12347,3000);
    c1.display();
    c2.display();
    c3.display();
}