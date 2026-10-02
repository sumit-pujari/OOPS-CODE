#include<bits/stdc++.h>
using namespace std;
class customer{
    string name;
    int *balance;
    public:
    customer(string name,int b){
        this->name=name;
        balance=new int;
        *balance=b;
    }

    void display(){
        cout<<name<<" "<<*balance<<endl;
    }
    

    //destructor is used to free the memory allocated by new operator means dynamic memory allocation
    ~customer(){
        delete balance;
    }
};
int main(){
    customer c1("Sumit",1000);
    c1.display();
}