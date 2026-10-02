//Compile time polymorphism->operator overloading


#include<bits/stdc++.h>
using namespace std;
class Complex{
    int real,img;

    public:
    Complex(){

    }

    Complex(int real,int img){
        this->real=real;
        this->img=img;
    }

    void display(){
        cout<<real<<"+"<<img<<"i"<<endl;
    }

    Complex operator+(Complex &c){
        Complex ans;
        ans.real=real+c.real;
        ans.img=img+c.img;
        return ans;
    }
};
int main(){
    Complex c1(5,4);
    Complex c2(3,2);
    Complex c3=c1+c2;  //c1.operator+(c2)
    c3.display();
}


/*int a=5;
int b=4;
cout<<a+b<<endl;  //9

string str1="Sumit";
string str2="Rohit";
cout<<str1+str2<<endl;  //SumitRohit

'+' operator is overloaded for int and string data types
i.e operator overloading->same operator but different data types->compile time polymorphism->early binding*/