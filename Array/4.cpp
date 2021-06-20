//=========//IGNORE COMMENTS//===========//


//Sort an array of 0s, 1s and 2s 
//450Q
//bubblesort => uncomment for this


#include<bits/stdc++.h>
using namespace std;
 
// void print_array(int arr[], int arrSize){
//     int i; 
//     for(i=0; i<arrSize; i++){
//         cout<<arr[i]<<" ";
//     }
//     //cout<<"in print"<<endl;
//     cout<<endl;

// }

int main(){
    int n, i, arr[1000], k;
    int temp, j;
    
    //int arrSize = n;

    cout<<"ENTER N : ";
    cin>>n;

    // cout<<"ENTER K : ";
    // cin>>k;
    
    cout<<"ENTER ARRAY : ";
    for(i=0; i<n; i++){
        cin>>arr[i];
    }

    //cout<<"1"<<endl;
    
    // for(i=0; i<n-1; i++){
    //     for(j=0; j<(n-i-1); j++){                            //bubbleSort
    //         if(arr[j] > arr[j+1]){
    //             temp = arr[j];
    //             arr[j] = arr[j+1];
    //             arr[j+1] = temp;
    //         }
    //     }
    // }
    //cout<<"Array after bubble sort:";
    
    //without using an sorting algo
    //int m, l, h;
    int l = 0;
    int h = n - 1;
    int m = 0;
    while(m <= h){
        if(arr[m] == 0){
            swap(arr[l], arr[m]);
            l++;
            m++;
            continue;
        }
        if(arr[m] == 1){
            m++;
            continue;
        }
        if(arr[m] == 2){
            swap(arr[m], arr[h]);
            h--;
            continue;
        }
    }
    //cout<<"in main"<<endl;

   //int i; 
    for(i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
  

    //print_array(arr, arrSize);
    //NOW printing arr[k-1]
    //cout<<"Kth smallest element : "<<arr[k-1]<<endl;
}


    //bubbleSort(arr, arrSize);
    //printArray(arr, arrSize);


