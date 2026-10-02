#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>arr(5);
    cout<<"Enter the input: ";
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }

    //opening file
    ofstream fout;
    fout.open("31F_zero.txt");

    for(int i=0;i<5;i++){
        fout<<arr[i]<<" ";
    };

    fout.close();
}