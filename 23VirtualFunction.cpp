#include<bits/stdc++.h>
using namespace std;
class Animal{
    public:
    virtual void speak(){
        cout<<"HuHu"<<endl;
    }
};

class Dog:public Animal{
    public:
    void speak(){
        cout<<"Bark"<<endl;
    }
};

class Cat:public Animal{
    public:
    void speak(){
        cout<<"Meow"<<endl;
    }
};

int main(){
    // Animal *p;
    // p=new Dog();
    // p->speak();  //early binding->compile time polymorphism->function overloading
    Animal *p;
    vector<Animal*>animals;
    animals.push_back(new Dog());
    animals.push_back(new Cat());
    animals.push_back(new Animal());
    animals.push_back(new Dog());
    animals.push_back(new Cat());

    for(int i=0;i<animals.size();i++){
        p=animals[i];
        p->speak();
    }
} 


//early binding->compile time polymorphism->function overloading
//late binding->run time polymorphism->function overriding
//to do it using virtual keyword
//virtual void speak(){}
//virtual keyword->if you see it->then you have to run it at runtime not compile time



//virtual void speak()=0;      pure virtual function==abstract class
//                             condition:-we can not create of its class directly