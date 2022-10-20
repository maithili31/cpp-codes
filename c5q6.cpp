#include <bits/stdc++.h>
using namespace std;

int main () {
    int n;
    cin>>n;
    int a[n];
    int maxa=INT_MIN;
    int mina=INT_MAX;
    for (int i=0;i<n;i++) {
        cin>>a[i];
        if (maxa<a[i]) {
            maxa=a[i];
        }
        if (mina>a[i]) {
            mina=a[i];
        }
    }
    cout<<maxa<<endl;
    cout<<mina<<endl;
    cout<<maxa-mina<<endl;
    return 0;
}