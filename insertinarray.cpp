#include <bits/stdc++.h>
using namespace std;

int main () {
    int n;
    cin>>n;
    int a[n];
    for (int i=0;i<n;i++) {
        cin>>a[i];
    }
    int x,pos;
    cin>>x>>pos;
    a[pos-1]=x;
    for (int i=n;i>pos;i--) {
        a[i]=a[i-1];
    }
    for (int i=0;i<=n;i++) {
        cout<<a[i]<<"  ";
    
    }
    return 0;
}