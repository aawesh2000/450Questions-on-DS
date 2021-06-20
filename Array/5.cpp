//Move all negative numbers to beginning and positive to end with constant extra space
#include<bits/stdc++.h>
using namespace std;
//without sorting, JUST SEGRIGATING +ve and -ve numbers

int main(){
    int n, i, arr[1000], k;
    int temp, j;
    int right, left;

    cout<<"ENTER N : ";
    cin>>n;

    cout<<"ENTER ARRAY : ";
    for(i=0; i<n; i++){
        cin>>arr[i];
    }

    left = 0;
    right = n-1;

    while (left<=right){
        if(arr[left]<0 && arr[right]<0){
            left++;
        }
        else if (arr[left]>0 && arr[right]<0){
            int temp=arr[left];
            arr[left]=arr[right];
            arr[right]=temp;
            left++;
            right--;
        }
        else if(arr[left]>0 && arr[right] >0){
            right--;
        }
        else{
            left++;
            right--;
            }
    }
        
    for(i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
  
}



