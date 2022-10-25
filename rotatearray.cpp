#include <bits/stdc++.h>
using namespace std;

int main () {
    int n;
    cin>>n;
    int x;
    cin>>x;
    int a[n];
    for (int i=0;i<n;i++) {
        cin>>a[i];
    }
    int s=0;
    int b[n];
    for (int i=0;i<x;i++) {
        b[n-x+i]=a[i];
    }
    for (int i=x;i<n;i++) {
        b[s]=a[i];
        s++;
    }
    for (int i=0;i<n;i++) {
        cout<<b[i]<<" ";
    }
    cout<<endl;
}