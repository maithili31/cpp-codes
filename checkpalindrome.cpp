#include <bits/stdc++.h>
using namespace std;

int main () {
    int n;
    cin>>n;

    char arr[n+1];
    cin>>arr;

    bool check=1;

    for (int i=0;i<n;i++) {
        if (arr[i]!= arr[n-1-i]) {
            check=0;
            cout<<"word is not palindrome";
            break;
        }
        else {
            cout<<"word is palindrome";
            break;

        }
    }
    
    
    
    
    return 0;
}