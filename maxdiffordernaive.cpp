#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) {
        cin>>a[i];
    }
    int maxi=a[1]-a[0];
    for(int i=0;i<n;i++) {
        for(int j=i+1;j<n;j++) {
            if(a[j]-a[i]>maxi) {
                maxi=a[j]-a[i];
            }
        }
    }
    cout<<maxi<<endl;
    return 0;
}