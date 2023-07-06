#include <bits/stdc++.h>
using namespace std;

int peakel(int a[],int n) {
    int b[n];
    int j=0;
    for(int i=1;i<n;i++) {
        if(a[i-1]<a[i] && a[i+1]<a[i]) {
            cout<<a[i]<<endl;
            j=i;
            break;
        }
    }
    for(int i=n-2;i>j;i--) {
        if(a[i]>a[i-1] && a[i]>a[i+1]) {
            cout<<a[i]<<endl;
            break;
        }
    }
    return 0; 
}

int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) {
        cin>>a[i];
    }
    cout<<peakel(a,n);
    return 0;
}