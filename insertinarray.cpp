#include <bits/stdc++.h>
using namespace std;

int main () {
    int n,el,pos;
    cin>>n>>el>>pos;
    int a[n];
    for (int i=0;i<n;i++) {
        cin>>a[i];
    }
    for (int i=n-1;i>=pos;i--) {
        a[i+1]=a[i];
    }
    a[pos]=el;
    n+=1;
    for (int i=0;i<n;i++) {
        cout<<a[i]<<"  ";
    } 
    cout<<endl;

}