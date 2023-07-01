#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,d;
    cin>>n>>d;
    int a[n];
    for(int i=0;i<n;i++) {
        cin>>a[i];
    }
    int t[d];
    for(int i=0;i<d;i++) {
        t[i]=a[i];
    }
    for(int i=d;i<n;i++) {
        a[i-d]=a[i];
    }
    for(int i=0;i<d;i++) {
        a[n-d+i]=t[i];
    }
    for(int i=0;i<n;i++) {
        cout<<a[i]<<" ";
    }

    return 0;
}