#include <bits/stdc++.h>
using namespace std;

int main () {
    int a,b,c;
    cin>>a>>b>>c;
    if (a>=b && a>=c) {
        if (b>=c) {
            cout<<"Ajay"<<endl;
        } else {
            cout<<"shyam"<<endl;
        }
    } else if (b>a && b>c) {
        if (a>c) {
            cout<<"ajay"<<endl;
        } else {
            cout<<"ram"<<endl;
        }
    } else if (c>a && c>b) {
        if (a>b) {
            cout<<"shyam"<<endl;
        } else {
            cout<<"ram"<<endl;
        }
    }
    return 0;
}