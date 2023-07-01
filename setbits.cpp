#include <bits/stdc++.h>
using namespace std;

int setb(int n) {
    int binary=0,t=1;
   while (n>0) {
        int x=n%2;
        binary = binary + x*t;
        n = n/2;
        t = t*10;
    } 
    int count=0;
    while (binary!=0) {
        int x=binary%10;
        if (x==1) {
            count++;
        }
        binary=binary/10;
    }
    return count;
}

int main() {
    int n;
    cin>>n;
    cout<<setb(n);
    return 0;
}