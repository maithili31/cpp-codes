#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        int arr[n];
        for (int i=0;i<n;i++) {
            cin>>arr[i];
        }
        int b[n];
        for (int i=0;i<n;i++) {
            b[i]=arr[n-1-i];
            cout<<b[i]<<" ";
        }
        cout<<endl;
    }
}