#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) {
        cin>>a[i];
    }
    int diff=0;
    int maxi=0;
    for(int i=0;i<n;i++) {
        diff=a[i+1]-a[i];
        maxi=max(maxi,diff);
    }
    cout<<maxi<<endl;
    return 0;
}