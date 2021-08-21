#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin>>str;
    int count = 0;
    int count0 = 0;
    int count1 = 0;
    for(int i=0; i<str.length(); i++){
        if(str[i] == '0'){
            count0++;
        }
        if(str[i] == '1'){
            count1++;
        }
        if(count1 == count0){
            count++;
        }
        
    }
    if(count == 0){
        cout<<"-1";
    }

    cout<<count;
    
}