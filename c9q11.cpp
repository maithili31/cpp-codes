#include <bits/stdc++.h>
using namespace std;

float tri(int a,int b,int c) {
    float s= (a+b+c)/2;
    float af=sqrt(s*(s-a)*(s-b)*(s-c));
    cout<<af<<endl;
    return 0;
}

int main () {
    int a,b,c;
    cin>>a>>b>>c;
    int area=tri(a,b,c);
    cout<<area<<endl;
    return 0;
}