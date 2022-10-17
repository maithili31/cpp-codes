#include <bits/stdc++.h>
using namespace std;

int main () {
    int a,b,c;
    cin>>a>>b>>c;
    if (a==b || c==a) {
        if (b==c) {
            cout<<"equilateral"<<endl;
        } else {
            cout<<"isosceles"<<endl;
        }
    } else {
        cout<<"scalar"<<endl;
    }
    return 0;
}