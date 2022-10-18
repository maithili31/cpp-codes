#include <bits/stdc++.h>
using namespace std;

int main () {
    int n;
    cin>>n;
    int a= sin(n);
    int b= cos(n);
    int c= a*a+b*b;
    int d=pow(c,0.5);
    if (d==1) {
        cout<<"yes"<<endl;
    } else {
        cout<<"no"<<endl;
    }
    return 0;
}