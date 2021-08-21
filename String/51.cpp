//A Program to check if strings are rotations of each other or not
//length is STL library in CPP=> Usage :- str.length()


#include <bits/stdc++.h>
using namespace std;

bool check(string str1, string str2){
    int i;
    int m = str1.length();
    int n = str2.length();

    if(str1.length() != str2.length()){
        return false;
    }

    for(i=0; i<m; i++){
        rotate(str1.begin(), str1.begin()+1, str1.end());

        if(!str1.compare(str2)){
            return true;
        }
        
    }
    return false;
}

int main(){
    string str1 = "ABCD", str2= "CDAB";
    if(check(str1, str2))
        cout<<"IsRotation"<<endl;   
    else
        cout<<"IsNOTRotation"<<endl;
    
    return 0;
}

//ABCDEFG
