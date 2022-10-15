#include <bits/stdc++.h>
using namespace std;

int main () {
    int x,y;
    cin>>x>>y;
    int a=x*x+y*y;
    int r=sqrt(a);
    int w= atan(y/x);
    cout<<r<<" "<<w<<endl;
    return 0;
}