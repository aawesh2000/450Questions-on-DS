#include<bits/stdc++.h>
using namespace std;
//#include <cmath>
#include <math.h>

int main(){
    int n;
    cin>>n;
    int sqrtofN = sqrt(n);

    if(sqrtofN*sqrtofN == n){
        cout<<sqrtofN-1<<endl;
    }
    else{
        cout<<sqrtofN<<endl;
    }
}