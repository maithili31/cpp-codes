#include <bits/stdc++.h>
using namespace std;

int main () {
    int n;
    cin>>n;
    int t=n;
    int a=n/100;
    int b=(n-a*100)/50;
    int c=(n-(a*100+b*50))/10;
    int d= (n-(a*100+b*50+c*10))/5;
    int e=(n-(a*100+b*50+c*10+d*5))/2;
    int f=(n-(a*100+b*50+c*10+d*5+e*2));
    cout<<a+b+c+d+e+f<<endl;

    return 0;
}