//reverse STRING #47
#include <bits/stdc++.h>
using namespace std;
int main(){

    char arr[1000];
    int i, j, n;

    cout<<"ENTER N : ";
    cin>>n;

    cout<<"ENTER ARRAY : ";
    for(i=0; i<n; i++){
        cin>>arr[i];
    }

    i = 0;
    j = n-1;

    while(i<j){
        swap(arr[i], arr[j]);
        i++;
        j--;
    }

    for(i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

}