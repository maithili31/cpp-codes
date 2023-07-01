#include <bits/stdc++.h>
using namespace std;

void lrotate(int a[],int n) {
    int x=a[0];
    for (int i=1;i<n;i++) {
        a[i-1]=a[i];
    }
    a[n-1]=x;
}

void leftrotated(int a[],int d,int n) {
    for(int i=0;i<d;i++) {
        lrotate(a,n);
    }
}

int main() {
    int n,d;
    cin>>n>>d;
    int a[n];
    for(int i=0;i<n;i++) {
        cin>>a[i];
    }
    leftrotated(a,d,n);
    for(int i=0;i<n;i++) {
        cout<<a[i]<<" ";
    }
    return 0;
}