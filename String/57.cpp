

#include<bits/stdc++.h>
using namespace std;

void permutation(string str, string output){
    if(str.size() == 0){
        cout<<output<<endl;
        return;
    }

    for(int i=0; i<str.size(); i++){
        permutation(str.substr(1), output + str[0]);
        rotate(str.begin(), str.begin()+1, str.end());    //rotate 1 chacecter and put in begenning of string.
    }
}

int main(){
    string str = "abc";
    //cin>>str;

    permutation(str, "");

}
