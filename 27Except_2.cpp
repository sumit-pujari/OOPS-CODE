#include<bits/stdc++.h>
#include<exception>

using namespace std;
class Exception{
    protected:
    string msg;

    public:
    Exception(string msg){
        this->msg=msg;
    }

    string what(){
        return msg;
    }

};
int main(){
    try{
        int *p=new int[1000000000];
        cout<<"Memo alloction is successful"<<endl;
        delete []p;
    }

    catch(const bad_alloc &e){
        cout<<"Exception occuered :"<<e.what()<<endl;
    }
}