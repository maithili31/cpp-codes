#include <bits/stdc++.h>
using namespace std;

int main () {
    int n;
    cin>>n;
    int octal=0,i=1;
    int x=0;
    int reverse=0,lastdigits=0;
    while (n!=0) {
        x=n%8;
        n=n/8;
        octal += x*i;
        i *= 10;
        int lastdigits = x%10;
        reverse = reverse*10 + lastdigits;
        x=x/10;
    }
    cout<<reverse<<endl;
    
    return 0;
}