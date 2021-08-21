



//brute force method for==>> Printing all the duplicates in the input string

//there is some issue with this code, refer next CODE written below after this code

/*#include <bits/stdc++.h>
using namespace std;

int main(){
    //char str[1000]  ;
    int i, j;
    int count=0;
    //cout<<"enter string : ";
    //cin>>str;
    //int length = strlen(str);
    int n;
    cin>>n;
    int arr[1000];
    for(i=0; i<n; i++){
        cin>>arr[i];
    }

    for(i=0; i<n; i++){
        for(j=i+1; j<n; j++){
            if(arr[i] == arr[j]){
                cout<<arr[i]<<endl;
                break;
            }
        }
    }

    // for(i=0; i<length; i++){
    //     count = 1;
    //     for(j=i+1; j<length; j++){
    //         if(str[i] == str[j] && str[i] != ' ') {  
    //             cout<<str[i]<<" ";  
    //             count++;
    //             str[j] = '0';
    //         }
    //     }
    // }

    // if(count > 1 && str[i] != '0'){
    //         cout<<str[i]<<"count"<<endl;
    // }  
    
}
*/


//Printing all the duplicates in the input string
//using map stl in CPP
#include <bits/stdc++.h>
using namespace std;
void printDups(string str)
{
	map<char, int> count;                       //declare map of type (int,int) named as "count"
	for (int i = 0; i < str.length(); i++) {            //itrate over map and count frequency
		count[str[i]]++;
	}

	for (auto it : count) {                     //itrate and print them
		if (it.second > 1)
			cout << it.first << ", count = " << it.second
				<< "\n";
	}
}
int main()
{
	string str = "test string";                 //driver Code
	printDups(str);
	return 0;
}


