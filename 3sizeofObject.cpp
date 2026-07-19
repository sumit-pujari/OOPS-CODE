#include<bits/stdc++.h>
using namespace std;
class object{
    int a;
    char c;
};
int main(){
    object o1;
    cout<<sizeof(o1)<<endl;
}


//sizeof a=4
//sizeof c=4 not 1 for to make the zise of char 1 using padding and alignment concept