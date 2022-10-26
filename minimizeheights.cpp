#include <bits/stdc++.h>
using namespace std;

int main () {
    int n,k;
    cin>>n>>k;
    int a[n]={ };
    int b[n]={ };
    for (int i=0;i<n;i++) {
        cin>>a[i];
        if (a[i]-k<=0) {
            b[i]=a[i]+k;
        } else {
            b[i]=a[i]-k;
        }
        cout<<b[i]<<" ";
    }
    cout<<endl;

    for (int i=0;i<n-1;i++) {
        for (int j=i+1;j<n;j++) {
            if (b[j]<b[i]) {
                int c= b[j];
                b[j]=b[i];
                b[i]=c;
            }
        }
    }

    cout<<b[n-1]-b[0]<<endl;
    
    return 0;
}