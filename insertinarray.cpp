#include <bits/stdc++.h>
using namespace std;

int main () {
    int n,pos,x;
    cin>>n>>pos>>x;
    int a[n];
    for (int i=0;i<n;i++) {
        cin>>a[i];
    }
    for (int i=n;i>pos;i--) {
        a[i]=a[i-1];
        a[pos-1]=x;
    }
    for (int i=0;i<n;i++) {
        cout<<a[i]<<"  ";
    } 
    cout<<endl;
    return 0;
}