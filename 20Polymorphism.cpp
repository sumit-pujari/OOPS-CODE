#include<bits/stdc++.h>
using namespace std;
class Area{
    public:
    int calculatearea(int r){
        int ans= 3.14*r*r;
        cout<<ans<<endl;
    }

    int calculatearea(int l,int b){
        int ans= l*b;
        cout<<ans<<endl;
    }
};

int main(){
    Area a1,a2;
    a1.calculatearea(5);
    a2.calculatearea(5,10);
}


// int calculatearea(int r),int calculatearea(int l,int b)   
//same name but different parameters->function overloading->compile time polymorphism->early binding
//polymorphism->many forms->same name but different forms