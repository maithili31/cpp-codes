#include <bits/stdc++.h>
using namespace std;

int main () {
    int a,b,c;
    cin>>a>>b>>c;
    int s=(a+b+c)/2;
    int x=s-a;
    int y=s-b;
    int z=s-c;
    int m=s*(x*y*z);
    int j=sqrt(m);
    cout<<j<<endl;

    return 0;
}