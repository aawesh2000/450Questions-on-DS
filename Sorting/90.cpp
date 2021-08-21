#include<bits/stdc++.h>
using namespace std;

int main(){
    int i,j;
    int first_index = -1;
    int last_index = -1;
    int n, x, arr[100];
    cin>>n;
    cin>>x;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    for(int i=0; i<n; i++){
            if(arr[i]==x && first_index == -1){
                first_index = i;
            }
            if(arr[i] == x && first_index != -1 ){
                last_index = i;
            }   
    }

    cout<<first_index<<" "<<last_index<<endl;
}