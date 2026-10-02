#include<bits/stdc++.h>
using namespace std;
int main(){

    ifstream fin;
    //oepning file
    fin.open("29F_Zoom.txt");

    //reading file
    char c;
    //fin>>c;
    c=fin.get();

    //eof==end of file
    while(!fin.eof())
    {
        cout<<c;
        //fin>>c;
        c=fin.get();
    };
    fin.close();
}