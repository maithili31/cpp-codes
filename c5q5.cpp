#include <bits/stdc++.h>
using namespace std;

int main () {
    int n;
    cin>>n;
    int octal=0,i=1;
    int x;
    while (n!=0) {
        x=n%8;
        n=n/8;
        octal += x*i;
        i *= 10;
        cout<<x;
    }
    cout<<endl;
    return 0;
}