#include <bits/stdc++.h>
using namespace std;

int lc(int n,int m) {
    
    if (m==0) {
        return n;
    } 
    return lc(m,n%m);
    
}

int main() {
    int n,m;
    cin>>n>>m;
    double y= (n*m)/lc(n,m);
    cout<<y<<endl;
    return 0;
}