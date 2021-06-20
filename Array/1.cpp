//450Q
//Write a program to reverse an array or string
//1st question
#include<bits/stdc++.h>
using namespace std;

//there is some error in this code, idk why, will check it later 


void reverse(int arr[], int start, int end){
    //start = arr[0];
    //end = arr[n-1];
    
    if(start >= end){
        return;
    }

    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
    
    reverse(arr, start+1, end-1);
}


void print_array(int arr[], int Size){
    for (int i = 0; i < Size; i++)
    cout << arr[i] << " ";
    cout<<endl;
    
    cout<<"HERLLOW"<<endl;
}


int main(){
    int n, i, arr[];
    int start, end;

    cout<<"ENTER N : ";
    cin>>n;
    
    cout<<"ENTER ARRAY TO BE REVERSED : ";
    for(i=0; i<n; i++){
        cin>>arr[i];
    }

    //start = arr[0];
    //end = arr[n-1];
    
    int arrSize = sizeof(arr)/sizeof(arr[0]);
    //cout<<arrSize<<endl;
    //cout<<"UNREVERSED ARRAY";
    //print_reversed_array(arr, arrSize);
    reverse(arr, 0, n-1);
    //cout<<"REVERSED ARRAY";    
    print_array(arr, arrSize);

    cout<<"HERLLOW1"<<endl;
    /*for (int i = 0; i < n ; i++){
    cout << arr[i] << " ";
    }
    */
    //cout << endl;

    //cout<<"REVERSED ARRAY: ";
    //for(i=0; i<n; i++){
    //    cout<<arr[n]<<" ";
    //}

}
