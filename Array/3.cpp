//Kth smallest element 
//450Q

#include<bits/stdc++.h>
using namespace std;
 
// void swap(int p, int q)
// {
//     int temp = p;
//     p = q;
//     q = temp;
// }
 
// void printArray(int arr[], int size)
// {
//     int i;
//     for (i = 0; i < size; i++)
//         cout << arr[i] << " ";
//     cout << endl;
// }

// void bubbleSort(int arr[], int n)
// {
//     int i, j;
//     for (i = 0; i < n-1; i++)    
     
//     // Last i elements are already in place
//     for (j = 0; j < n-i-1; j++)
//         if (arr[j] > arr[j+1])
//             swap(arr[j], arr[j+1]);

//     //cout<<"inside fnt"<<endl;
//     //for(i=0;i<n;i++){
//     //    cout<<arr[i]<<" ";
//     //}
    
// }

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


