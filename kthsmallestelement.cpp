#include <bits/stdc++.h>
using namespace std;

int main () {
    int n;
    cin>>n;
    int a[n]={ };
    int k;
    cin>>k;
    for (int i=0;i<n;i++) {
        cin>>a[i];
    }
    int c=0;
    for (int i=0;i<n-1;i++) {
        for (int j=i+1;j<n;j++) {
            if (a[j]<a[i]) {
                int c= a[j];
                a[j]=a[i];
                a[i]=c;
            }
        }
    }
    cout<<a[k]<<endl;
    cout<<endl;
    return 0;
}