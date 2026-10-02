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
             throw runtime_error("amount should be greater than 0");
        }
    }

    //withdraw
    void withdraw(int amount){
        if(amount<=balance && amount>0){
             balance-=amount;
             cout<<amount<<" is debited successfully"<<endl;
        }
        else if(amount<0){
            throw runtime_error("amount should be greater than 0");
        }
        else{
            throw runtime_error("Your balance is low");
        }
    }
};

int main(){
    customer c1("SUmit",5000,123);
    try{
        c1.deposite(500);
        c1.withdraw(6000);
    }
    catch(const runtime_error &e){
        cout<<"Exception Occured:"<<e.what()<<endl;
    }

    catch(const bad_alloc &e){
        cout<<e.what()<<endl;
    }

    catch(...){
        cout<<"ex"<<endl;         
    }
     
}



//custom exception handler


// class InvalidAmountError{
//       public:
//       InvalidAmountError(const string &msg): runtime_error(msg){
//       };
// };