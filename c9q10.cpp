#include <bits/stdc++.h>
using namespace std;

int check (int x,int y,int z) {
    x=y;
    y=z;
    z=x;
    cout<<x<<" "<<y<<" "<<z;
    return 0;
}

int main () {
    int x,y,z;
    cin>>x>>y>>z;
    int a=check (x,y,z);
    cout<<a<<endl;
    return 0;
}