//repated
#include <bits/stdc++.h>
using namespace std;


char Repeating(char* str){
    int i, j;
    int length = strlen(str);

    // if(str == NULL || str[0] == '\0'){
    //     cout<<"-1"<<endl;
    //     return 0;
    // }

    for(i=0; i<length; i++){
        
        for(j=i+1; j<length; j++){
            if(str[i] == str[j]){  
                cout<<str[i]<<" ";  
                return 0;
            }
        }
    }
}

int main(){
    // /int count = 0;
    char str[1000];
    cin>>str;

    Repeating(str);
    //cout<<str[i]<<endl;


}