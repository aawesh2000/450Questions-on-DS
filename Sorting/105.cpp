#include <bits/stdc++.h>
using namespace std;

//1 case missing of 0 , use if loop and do it, thanks
int main(){
    int n, arr[100], i;
    cin>>n;
    int allPro = 1;    //product of all elements 
    
    for(i=0; i<n; i++){
        cin>>arr[i];
    }

    for(i=0; i<n; i++){
        allPro = allPro * arr[i];      //multiply all elements
    }


    //cout<<allPro<<endl;

    for(i=0; i<n; i++){
        arr[i] = allPro / arr[i];
    }

    for(i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }



}