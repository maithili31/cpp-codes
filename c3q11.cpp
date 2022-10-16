#include <bits/stdc++.h>
using namespace std;

int main () {
    int x,y,r;
    cin>>x>>y>>r;
    int m,n;
    cin>>m>>n;
    int a= pow(x-m,2);
    int b=pow(y-n,2);
    int c=pow(a+b,0.5);
    if (c==r) {
        cout<<"yes"<<endl;
    } else {
        cout<<"no"<<endl;
    }
    return 0;
}