#include<bits/stdc++.h>
using namespace std;

int main(){
    int a, b, c;
    cin>>a>>b>>c;

    if(b>c && b<a){
        cout<<b<<endl;
    }
    else if(c>a && c<b ){
        cout<<c<<endl;
    }
    else if(a<b && a>c){
        cout<<a<<endl;
    }
}   