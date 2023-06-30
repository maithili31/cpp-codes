#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) {
        cin>>a[i];
    }
    int ls=0,rs=0;
    for(int i=0;i<n;i++) {
        for(int j=0;j<=i-1;j++) {
            ls+=a[j];
        }
        for(int k=i+1;k<=n-1;k++) {
            rs+=a[k];
        }

        if (ls==rs) {
            cout<<i;
            break;
        }
        ls=0,rs=0;
    }
    return 0;
}