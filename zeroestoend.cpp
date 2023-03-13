#include <bits/stdc++.h>
using namespace std;

int main () {
    int n;
    cin>>n;
    int a[n];
    int k=0;
    for (int i=0;i<n;i++) {
        cin>>a[i];
    }
    for (int i=0;i<n;i++) {
        if (a[i]!=0) {
            a[k++]=a[i];
        }
    }
    while (k<n) {
        a[k++]=0;
    }
    for (int i=0;i<n;i++) {
        cout<<a[i]<<"  ";
    }
    
    return 0;
}