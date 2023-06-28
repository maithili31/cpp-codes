#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int x=n;
    int r=0;
    while (x!=0) {
        int t=x%10;
        r=r*10+t;
        x=x/10;
    }
    if (n==r) {
        cout<<"Palindrome"<<endl;
    } else {
        cout<<"Not a Palindrome"<<endl;
    }

    return 0;
}