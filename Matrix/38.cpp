
#include <bits/stdc++.h>
using namespace std;

int search(int arr[4][4], int target, int n){
    
    bool found = false;
    int r = 0, c = n-1;
    while(r<n && c>=0){
        if(arr[r][c] == target){
            found = true;
            break;
        }
        arr[r][c] > target ? c-- : r++;
        // if(arr[r][c] > target){
        //     c--;
        // } 
        // else{
        //     r++;
        // }
    }

    if(found){
        cout<<"FOUND";
    }
    else{
        cout<<"NOT FOUND";  
    }

}

int main(){
    
    int arr[4][4] = { { 10, 20, 30, 40 },
                      { 15, 25, 35, 45 },
                      { 27, 29, 37, 48 },
                      { 32, 33, 39, 50 } };
    // int n,m;
    // int arr[m][n];
    // int target;
    // cin>>m>>n>>target;
    // for(int i=0; i<m; i++){
    //     for(int j=0; j<n; j++){
    //         cin>>arr[i][j];
    //     }
    // }

    search(arr, 129, 4);
    return 0;
}