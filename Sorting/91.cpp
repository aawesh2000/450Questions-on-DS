#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j;
    int n, x, arr[100];
    cin>>n;
    for(int i=1; i<n-1; i++){
        cin>>arr[i];
    }

    for(int i=1; i<n-1; i++){
        if(i == arr[i]){
            cout<<arr[i]<<endl;
        }
    }

}