#include <bits/stdc++.h>
using namespace std;

int main () {
    int a,b,c;
    cin>>a>>b>>c;
    if (a+b>c || b+c>a || c+a>b) {
        cout<<"yes"<<endl;
    } else {
        cout<<"no"<<endl;
    }
    return 0;
}