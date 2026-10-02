#include<bits/stdc++.h>
using namespace std;

// class customer{
//     string name;
//     int acc_no;
//     int balance;
//     static int total_customers; // static member variable to keep track of total customers
// public:
//     customer(string n, int a, int b){
//         name = n;
//         acc_no = a;
//         balance = b;
//         total_customers++; // increment static member variable when an object of the class is created
//     }

//     void display(){
//         cout<<name<<" "<<acc_no<<" "<<balance<<" "<<total_customers<<endl;
//     }
// };

// int customer::total_customers = 0; // initialize static member variable

// int main(){
//     customer c1("Sumit", 12345, 1000);
//     c1.display();

//     customer c2("Rohit", 12346, 2000);
//     c2.display();

// }



/*They ase attribute of classes os class member

It is declared using static Keyword

Only one Copy of that member is Created for the entire class
Class & is Shared by all the object 

It is initialized before any object of this class is created.*/


// class customer{
//     string name;
//     int acc_no;
//     int balance;
   
// public:
//     static int total_customers; // static member variable to keep track of total customers
//     customer(string n, int a, int b){
//         name = n;
//         acc_no = a;
//         balance = b;
//         total_customers++; // increment static member variable when an object of the class is created
//     }

//     void display(){
//         cout<<name<<" "<<acc_no<<" "<<balance<<" "<<total_customers<<endl;
//     }
// };

// int customer::total_customers = 0; // initialize static member variable

// int main(){
//     customer c1("Sumit", 12345, 1000);
//     c1.display();

//     customer::total_customers=5;
//     c1.display();

//     customer c2("Rohit", 12346, 2000);
//     c2.display();
    
// }



class customer{
    string name;
    int acc_no;
    int balance;
    static int total_customers; // static member variable to keep track of total customers
public:
    customer(string n, int a, int b){
        name = n;
        acc_no = a;
        balance = b;
        total_customers++; // increment static member variable when an object of the class is created
    }

    static void display_total_customers(){
        cout<<"Total Customers: "<<total_customers<<endl;
    }

    void display(){
        cout<<name<<" "<<acc_no<<" "<<balance<<" "<<total_customers<<endl;
    }
};

int customer::total_customers = 0; // initialize static member variable

int main(){
    customer c1("Sumit", 12345, 1000);
    c1.display();
    
    customer::display_total_customers(); // call static member function to display total customers
    customer c2("Rohit", 12346, 2000);
    c2.display();

}
