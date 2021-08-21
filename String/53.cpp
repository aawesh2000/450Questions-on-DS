//OP question
#include<bits/stdc++.h>
using namespace std;
#include <string.h>

// string operator+( string s, int i ){ 
//     return s + to_string( i ); 
// }

string sayAndPrint(string temp){
    string Ans;
    int x = 0;
    while(x < temp.length()){
        char TT = temp[x];
        int count = 1;
        x++;
        while(x < temp.length() && temp[x] == TT ){
            count++;
            x++;
        }
        Ans = Ans + to_string(count);
        //Ans = Ans + to_string(TT);   
        //strncat(Ans, &TT, 1);
        Ans.append(sizeof(char), TT);

    }
    return Ans;
}

string getanswer(int n){
    if(n == 1){
        return "1";
    }
    else{
        string temp = getanswer(n-1);
        return sayAndPrint(temp);
    }
}


int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;

    cout<<getanswer(n)<<endl;

}