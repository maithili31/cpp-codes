#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++) {
        cin>>a[i];
    }
    int b[n+1];
    for(int i=0;i<n;i++) {
        b[i]=a[i];
    }
    b[n]=k;
    for(int i=0;i<n+1;i++) {
        cout<<b[i]<<" ";
    }
    return 0;
}