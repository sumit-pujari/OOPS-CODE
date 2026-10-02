#include<bits/stdc++.h>
using namespace std;

class customer{
    string name;
    int balance,acc_no;
    
    public:
    customer(string name,int balance,int acc_no){
        this->name=name;
        this->balance=balance;
        this->acc_no=acc_no;
    };

    //deposite
    void deposite(int amount){
        if(amount>0){
            cout<<amount<<" is credited successfully"<<endl;
        }
        else{
             throw "amount should be greater than 0";
        }
    }

    //withdraw
    void withdraw(int amount){
        if(amount<=balance && amount>0){
             balance-=amount;
             cout<<amount<<" is debited successfully"<<endl;
        }
        else if(amount<0){
            throw "amount should be greater than 0";
        }
        else{
            throw "Your balance is low";
        }
    }
};

int main(){
    customer c1("SUmit",5000,123);
    try{
        c1.deposite(500);
        c1.withdraw(6000);
    }
    catch(const char *e){
        cout<<"Exception Occured:"<<e<<endl;
    }
     
}



// An exception is an unexpected problem that arises during the execution
// of a program our program terminates suddenly with some
// errors/issues . Exception occurs during the running of the program

// The try keyword represents a block of code that may throw an
// exception placed inside the try block. It's followed by one
// or more catch blocks. If an exception occurs, try block
// throws that exception.

// The catch statement represents a block of code that is executed
// when a particular exception is thrown from the try block.
// The code to handle the exception is written inside the catch block.

// An exception in C++ can be thrown using the throw keyword.
// When a program encounters a throw statement, then it immediately
// terminates the current function and starts finding a matching
// catch block to handle the thrown exception.