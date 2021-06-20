//Sort an array of 0s, 1s and 2s 
//450Q

#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n, i, arr[1000], k;
    int temp, j;
    
    int arrSize = sizeof(arr)/sizeof(arr[0]);

    cout<<"ENTER N : ";
    cin>>n;

    cout<<"ENTER K : ";
    cin>>k;
    
    cout<<"ENTER ARRAY : ";
    for(i=0; i<n; i++){
        cin>>arr[i];
    }

    //cout<<"1"<<endl;
    

    for(i=1; i<n; i++){
        for(j=0; j<(n-i); j++){
            if(arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    cout<<"Array after bubble sort:";
    for(i=0; i<n; i++){
        cout<<" "<<arr[i];
    }
    cout<<endl;

    //NOW printing arr[k-1]
    cout<<"Kth smallest element : "<<arr[k-1]<<endl;
}


    //bubbleSort(arr, arrSize);
    //printArray(arr, arrSize);


