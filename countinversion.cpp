#include <bits/stdc++.h>
using namespace std;

int getin(int a[], int n) {
    int ans=0;
    for(int i=0;i<n;i++) {
        for(int j=i+1;j<n;j++) {
            if(a[i]>a[j]) {
                ans++;
            }
        }
    }
    return ans;
}

int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) {
        cin>>a[i];
    }
    cout<<getin(a,n);
    return 0;
}