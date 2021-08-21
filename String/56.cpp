//56
#include <bits/stdc++.h>
using namespace std;
/*
void ALLsubsequence(string t, int i, int L, string str){
    //string t is empty string in whihch output will be stored
    if(i==L){
        cout<<t<<endl;
    }
    else{
        ALLsubsequence(t, i+1, L, str);
        t = t + str[i];
        ALLsubsequence(t, i+1, L, str);
    }
}

int main(){
    string str;
    //int L = str.length();
    cin>>str;

    ALLsubsequence("", 0, str.length(), str);

}

*/


void printSubsequence(string input, string output)
{
	
	if (input.empty()) {
		cout << output << endl;
		return;
	}

	// output is passed with including
	// the Ist characther of
	// Input string
	printSubsequence(input.substr(1), output + input[0]);

	// output is passed without
	// including the Ist character
	// of Input string
	printSubsequence(input.substr(1), output);
}


int main()
{
	string output = "";
	string input = "abcd";

	printSubsequence(input, output);

	return 0;
}
