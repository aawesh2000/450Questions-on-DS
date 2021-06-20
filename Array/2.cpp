//Maximum and minimum of an array using minimum number of comparison
//450Q

#include<bits/stdc++.h>
using namespace std;

//void minimum(){
//
//}

//void maximum(){
//
//}

/*void print_array(int arr[], int Size){
    for (int i = 0; i < Size; i++)
    cout << arr[i] << " ";
    cout<<endl;
    
    cout<<"HERLLOW"<<endl;
}
*/

int main(){
    int n, i, arr[1000];
    int min, max;
    cout<<"ENTER N : ";
    cin>>n;
    
    cout<<"ENTER ARRAY : ";
    for(i=0; i<n; i++){
        cin>>arr[i];
    }

    min = arr[0];
    max = arr[1];

    for(i=2; i<n; i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    cout<<"MIN : "<<min<<endl;

    for(i=2; i<n; i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    cout<<"MAX : "<<max<<endl;


    //print_array(arr, arrSize);
}