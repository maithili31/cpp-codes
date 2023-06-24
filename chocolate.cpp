#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin>>t;
    while (t--) {
        int x,y,z;
        cin>>x>>y>>z;
        if (x==1 && (x==y || x==z) || x==0 || y==1 && (y==z || y==x) || y==0 || z==1 && (z==x|| z==y) || z==0 ) {
            cout<<"no"<<endl;
        } else {
            cout<<"yes"<<endl;
        }
    }
    return 0;
}