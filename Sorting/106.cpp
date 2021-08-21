#include <bits/stdc++.h>
using namespace std;

void binary(unsigned n){
    if(n>1){
        binary(n/2);
    }
    cout<<(n%2);
}

int main(){
    int n;
    cin>>n;
    cout<<"0";
    binary(n);
    cout<<endl;

    
}