    //Union of two arrays using SETS
    //SET stl template in CPP 

    #include <bits/stdc++.h>
    using namespace std;

    void GETunion(int a[], int n, int b[], int m)
    {
        
        set<int> s;                     	// Defining set 

        for (int i = 0; i < n; i++){
            s.insert(a[i]);                 // Inserting array A elemnets in set s
        }                                   

        for (int i = 0; i < m; i++){
            s.insert(b[i]);                 // Inserting array B elemnets in set s
        }
        
        cout << "COUNT AFTER UNION : " << s.size() << endl;
        cout << "The union set of both Arrays is : " << endl;

        for (auto itr = s.begin(); itr != s.end(); itr++){          //for printing UNION SET OF BOTH ARRAY AFTER UNION
            cout << *itr<< " "; 
        }
    }

    
    int main()
    {
        int a[5] = { 10, 21, 55, 79, 32};
        int b[7] = { 22, 55, 89, 97, 79, 33, 11};

        GETunion(a, 5, b, 7);
    }



    /*
    //Set in C++ Standard Template Library (STL)
    #include <iostream>
    #include <iterator>
    #include <set>

    using namespace std;

    int main()
    {
        // empty set container
        set<int, greater<int> > s1;

        // insert elements in random order
        s1.insert(40);
        s1.insert(30);
        s1.insert(60);
        s1.insert(20);
        s1.insert(50);
        
        // only one 50 will be added to the set
        s1.insert(50);
        s1.insert(10);

        // printing set s1
        set<int, greater<int> >::iterator itr;
        cout << "\nThe set s1 is : \n";
        for (itr = s1.begin(); itr != s1.end(); itr++)
        {
            cout << *itr<<" ";
        }
        cout << endl;

        // assigning the elements from s1 to s2
        set<int> s2(s1.begin(), s1.end());

        // print all elements of the set s2
        cout << "\nThe set s2 after assign from s1 is : \n";
        for (itr = s2.begin(); itr != s2.end(); itr++)
        {
            cout << *itr<<" ";
        }
        cout << endl;

        // remove all elements up to 30 in s2
        cout
            << "\ns2 after removal of elements less than 30 :\n";
        s2.erase(s2.begin(), s2.find(30));
        for (itr = s2.begin(); itr != s2.end(); itr++) {
            cout <<*itr<<" ";
        }

        // remove element with value 50 in s2
        int num;
        num = s2.erase(50);
        cout << "\ns2.erase(50) : ";
        cout << num << " removed\n";
        for (itr = s2.begin(); itr != s2.end(); itr++)
        {
            cout <<*itr<<" ";
        }

        cout << endl;

        // lower bound and upper bound for set s1
        cout << "s1.lower_bound(40) : \n"
            << *s1.lower_bound(40)
            << endl;
        cout << "s1.upper_bound(40) : \n"
            << *s1.upper_bound(40)
            << endl;

        // lower bound and upper bound for set s2
        cout << "s2.lower_bound(40) :\n"
            << *s2.lower_bound(40)
            << endl;
        cout << "s2.upper_bound(40) : \n"
            << *s2.upper_bound(40)
            << endl;

        return 0;
    }

    */
