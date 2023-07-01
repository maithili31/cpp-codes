#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,k,t;
    cin>>n>>k>>t;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int b[n+1];
    for(int i=t;i<n+1;i++) {
        b[i+1]=a[i];
    }
    for(int i=0;i<t;i++) {
        b[i]=a[i];
    }
    b[t]=k;
    for(int i=0;i<n+1;i++) {
        cout<<b[i]<<" ";
    }
    return 0;
}