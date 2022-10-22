#include <bits/stdc++.h>
using namespace std;

int trick (int a, int b) {
   int c= pow(a,b);
   return c; 
}

int main () {
    int a,b;
    cin>>a>>b;
    int d=trick(a,b);
    cout<<d<<endl;
}