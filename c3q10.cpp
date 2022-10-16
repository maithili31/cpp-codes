#include <bits/stdc++.h>
using namespace std;

int main () {
    int x1,y1,x2,y2,x3,y3;
    cin>>x1>>y1>>x2>>y2>>x3>>y3;
    int a=(y2-y1)/(x2-x1);
    int b=(y3-y1)/(x3-x1);
    if (a==b) {
        cout<<"yes"<<endl;
    } else {
        cout<<"no"<<endl;
    }
    return 0;
}