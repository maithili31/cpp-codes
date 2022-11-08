#include <bits/stdc++.h>
using namespace std;

int main () {
    int n,tn;
    cin>>n>>tn;
    int a[n];
    for (int i=0;i<n;i++) {
        cin>>a[i];
    }
    int b=0;
    for (int i=0;i<n-1;i++) {
        b=a[i]+a[i+1];
        if (b==tn) {
            cout<<"true"<<endl;
            cout<<a[i]<<"  "<<a[i+1]<<endl;
            break;
        }
    }

    return 0;
}