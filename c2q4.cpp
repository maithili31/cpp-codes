#include <bits/stdc++.h>
using namespace std;

int main () {
    int l1,l2,g1,g2;
    cin>>l1>>l2>>g1>>g2;
    int a=abs(l1-l2);
    int b=abs(g1-g2);
    int c=cos(a);
    int d=cos(b);
    int D= 3963*acos(c*d);
    cout<<D<<endl;
    return 0;
}