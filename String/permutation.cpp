#include<bits/stdc++.h>
using namespace std;


/*
void EqualOrNot(string str, string output){
     for(int i=0; i<output.length(); i++){
        if(output[i] == str[i]){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}

string permutation(string pattern, string output){

    if(pattern.size() == 0){
        cout<<output<<endl;
        //return "";
    }

    for(int i=0; i<pattern.size(); i++){
        permutation(pattern.substr(1), output + pattern[0]);
        rotate(pattern.begin(), pattern.begin()+1, pattern.end());    //rotate 1 chacecter and put in begenning of string.
    }

    return output;
    
}

int main(){
    string str;
    cin>>str;
    string output;
    string pattern;
    cin>>pattern;

    //permutation(pattern, "");
    //cout<<"After per"<<endl;
    //cout<<output;
    EqualOrNot(str, output);
    
}


*/

//Write a program to reverse an array or string

#include<bits/stdc++.h>
using namespace std;

map<int,int> countt;
int arr[26]={0};

bool check(){
    for(int i =0;i<26;i++){
        if(arr[i] != countt[i])return false;
    }
    return true;
}

int main(){
    string str; cin>>str;
    string pattern; cin>>pattern;

    if(pattern.length()>str.length()) {cout<<"no";return 0;}

    for(int i=0; i<pattern.length(); i++){
        countt[pattern[i]-'a']++;
    }
    
    int i=0,j=0;

    while(j<pattern.length()){
        arr[str[j]-'a']++;
        j++;
    }

    if(check()){ cout<<"yes"; return 0;}

    while(j<str.length()){
        arr[str[i]-'a']--;
        arr[str[j]-'a']++;
        if(check()){ cout<<"yes"; return 0;}
        i++;
        j++;
    }
    cout<<"no";
    return 0;
}   
