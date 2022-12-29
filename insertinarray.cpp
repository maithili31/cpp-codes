#include <bits/stdc++.h>
using namespace std;

int main () {
    int n,el,pos;
    cin>>n>>el>>pos;
    int a[n];
    for (int i=0;i<n;i++) {
        cin>>a[i];
    }
    for (int i=n;i>pos;i--) {
        a[pos-1]=el;
        a[i]=a[i-1];
    }
    n++;
    for (int i=0;i<n;i++) {
        cout<<a[i]<<"  ";
    } 
    cout<<endl;

}