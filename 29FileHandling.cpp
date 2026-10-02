#include<bits/stdc++.h>
using namespace std;
int main(){

    //opening file
    ofstream fout;     //fout is object
    fout.open("29F_Zoom.txt"); // if path not found then create manually and open it
    
    //write in file
    fout<<"Hello";

    fout.close();   //close-to release resource used by file
}