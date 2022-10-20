#include <bits/stdc++.h>
using namespace std;

int main () {
    int n;
    cin>>n;
    int remainder=0,octal=0;

    while (n!=0) {
        remainder=remainder*10 + n%8;
        n=n/8;
    }
    while (remainder!=0) {
        octal=octal*10+remainder%10;
        remainder=remainder/10;
    }
    cout<<octal<<endl;
    return 0;
}