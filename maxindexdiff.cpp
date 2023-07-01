#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) {
        cin>>a[i];
    }
    int maxi=0;
    int diff=0;
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++){
            if(a[i]<=a[j] && i<=j) {
                diff=j-i;
            }
        }
        maxi=max(maxi,diff);
    }
    cout<<maxi<<endl;
    return 0;
}