#include <bits/stdc++.h>
using namespace std;

int main () {
    int n;
    cin>>n;
    int a[n];
    int maxa=a[0];
    int mina=a[0];
    for (int i=0;i<n;i++) {
        cin>>a[i];
        if (maxa<a[i]) {
            maxa=a[i];
        }
        if (mina>a[i]) {
            mina=a[i];
        }
    }
    cout<<maxa-mina<<endl;
    return 0;
}