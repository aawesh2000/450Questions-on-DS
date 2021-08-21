// Given an array arr[] of distinct integers of size N and a sum value X, 
//he task is to find count of triplets with the sum smaller than the given sum value X.
// Example 1:
// Input: N = 4, X = 2
// arr[] = {-2, 0, 1, 3}
// Output:  2
// Explanation: Below are triplets with 
// sum less than 2 (-2, 0, 1) and (-2, 0, 3). 

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,sum,arr[1000];
    int i,j;
    cin>>n;
    cin>>sum;
    for(i=0; i<n; i++){
        cin>>arr[i];
    }

    sort(arr, arr+n);
    int ans = 0;
    for (int i = 0; i < n - 2; i++)
    {
        int j = i + 1, k = n - 1;
        while (j < k)
        {
            if (arr[i] + arr[j] + arr[k] >= sum)
                k--;
            else
            {
                ans += (k - j);
                j++;
            }
        }
    }
    cout<<ans<<endl;

}