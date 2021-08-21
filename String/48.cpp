#include <bits/stdc++.h>
using namespace std;

int main(){
    char str[1000];
    int i, j, n;
    int flag=0;
    //cin>>n;
    cout<<"enter string : ";
    cin>>str;
    int length = strlen(str);
    //i = 0;
    //j = length-i-1;
    

    for(i=0; i<length; i++){
        if(str[i] != str[length-i-1]){
            flag = 1;
            break;
        }
    }
    
    if(flag){
        cout<<"NOT palindrome"<<endl;
    }
    else{
        cout<<"palindrome"<<endl;
    }
    

    
}
