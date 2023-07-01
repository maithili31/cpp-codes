#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) {
        cin>>a[i];
    }
    int maxi=INT_MIN;
    for(int i=n-1;i>=0;i--) {
        if (maxi<a[i]) {
            maxi=a[i];
            cout<<max(maxi,a[i])<<" ";
        }
    }
    return 0;
}