#include <bits/stdc++.h>
using namespace std;

int main () {
    int n,k;
    cin>>n>>k;
    int a[n]={ },b[k]={ };
    for (int i=0;i<n;i++) {
        cin>>a[i];
    }
    for (int i=0;i<k;i++) {
        cin>>b[i];
    }
    for (int i=0;i<k;i++) {
        cout<<a[b[i]-1]<<endl;
    }
    return 0;
}