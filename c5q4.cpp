#include <bits/stdc++.h>
using namespace std;

int main () {
    int n;
    cin>>n;
    int a[n];
    int b=0,c=0,d=0;
    for (int i=0;i<n;i++) {
        cin>>a[i];
        if (a[i]<0) {
            b++;
        } 
        if (a[i]>0) {
            c++;
        }
        if (a[i]==0) {
            d++;
        }
    }
    cout<<b<<"   "<<c<<"   "<<d<<endl;
    return 0;
}