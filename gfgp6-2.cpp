#include <bits/stdc++.h>
using namespace std;

int hcf(int n,int m) {
    if (m==0) {
        return n;
    } 
    return hcf(m,n%m);
}

int main() {
    int n,m;
    cin>>n>>m;
    cout<<hcf(n,m);
    return 0;
}