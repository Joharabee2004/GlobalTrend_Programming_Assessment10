

// C++ implementation of above approach
#include <bits/stdc++.h>
using namespace std;
 
// Function that checks whether
// the string is in alphabetical
// order or not
bool isAlphabaticOrder(string s)
{
    int n = s.length();
 
    for (int i = 1; i < n; i++) {
 
        // if element at index 'i' is less
        // than the element at index 'i-1'
        // then the string is not sorted
        if (s[i] < s[i - 1]) 
           return false;
    }
 
    return true;
}
 
// Driver code
int main()
{
    string s = "aabbbcc";
 
    // check whether the string is
    // in alphabetical order or not
    if (isAlphabaticOrder(s))
       cout << "True";
    else
       cout << "False";
 
    return 0;
}
