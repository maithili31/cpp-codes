#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin>>t;
    while (t--) {
        int x,y;
        cin>>x>>y;
        if (x==y) {
            cout<<0<<endl;
        } else if (x>y) {
            if ((x-y)%2!=0) {
                cout<<x-y<<endl;
            } else {
                cout<<(x-y)/2<<endl;
            }
        } else {
            cout<<y-x<<endl;
        }
    }
    return 0;
}