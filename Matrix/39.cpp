//median in 2D Sorted Array
//brute force=> copy all elemnets in temprary array and then sort that temp array then as given
//in question that number of elements are odd , we know that MEDIAN = n+m/2, basically middle one
// there directly print 

//Optimised One given below
//STL library used => UPPERBOUND

//It returns an iterator pointing to the first element in the range [first, last) that is greater than value, 
//or last if no such element is found
//usage upper_bound(a[i], a[i]+n, desired Number)

#include <bits/stdc++.h>
using namespace std;
const int MAX = 100;
int binaryMedian(int m[][MAX], int r ,int c){
    int min = INT_MAX;
    int max = INT_MIN;
    
    for (int i=0; i<r; i++){            //for minimum element in a matrix
                                        //The minimum element can be easily found by 
                                        //comparing the first element of each row because 2D array is sorted one
                                        // lly for maximun element in a matrix
        if (m[i][0] < min)
            min = m[i][0];
 
        if (m[i][c-1] > max)
            max = m[i][c-1];
    }
    
    int desired = (r * c + 1) / 2;
    while (min < max)
    {
        int mid = min + (max - min) / 2;
        int place = 0;
 
        for (int i = 0; i < r; ++i)
            place += upper_bound(m[i], m[i]+c, mid) - m[i];
        if (place < desired)
            min = mid + 1;
        else
            max = mid;
    }
    return min;


}

int main(){
    int r=3,c=3;
    int m[][MAX]= { {1,3,5}, {2,6,9}, {3,6,9} };            //3 cross 3 2D array
    cout<< binaryMedian(m, r, c) << endl;
    return 0;
}