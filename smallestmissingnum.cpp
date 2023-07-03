#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) {
        cin>>a[i];
    }
    int mini=1;
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            if(a[i]>0 && a[j]>a[i]) {
                mini=min(a[i],mini);
            }
        }
    }
    cout<<mini<<endl;
    
    return 0;
}