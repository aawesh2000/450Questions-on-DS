#include<bits/stdc++.h>
using namespace std;
//Check if a string is a valid shuffle of two distinct strings

bool checkShuffle(){

}

int main(){
    string str1,str2;
    cout<<"Enter String1 : ";
    cin>>str1;
    cout<<"Enter String1 : ";
    cin>>str2;

    //cout<<str<<endl;

    int n = str1.length();
    int m = str2.length();
    
    if(n > m){
        cout<<"NO"<<endl;
    }
    else{
        sort(str1.begin(), str1.end());
        //cout<<str1<<endl;
        for (int i=0; i<m; i++){
            if (i + n - 1 >= m)
                return false;
 
            // Initialise the new string
            string str_new = "";
 
            // Copy the characters of
            // string B in str till
            // length n
            for (int j = 0; j < n; j++)
                str_new.push_back(str2[i + j]);
 
            // Sort the string str
            sort(str_new.begin(), str_new.end());
 
            // Return true if sorted
            // string of "str" & sorted
            // string of "A" are equal
            if (str_new == str1)
                return true;
        }
    }

    
}