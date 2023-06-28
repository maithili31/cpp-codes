#include <bits/stdc++.h>
using namespace std;

int hcf(int n,int m) {
    while (n!=m) {
        if (n>m) {
            n=n-m;
        } else {
            m=m-n;
        }
    }
    return n;
}

int main() {
    int n,m;
    cin>>n>>m;

    cout<<hcf(n,m);

    return 0;
}