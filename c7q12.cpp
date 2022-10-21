#include <bits/stdc++.h>
using namespace std;

int main () {
    int x,y;
    cin>>x>>y;
    if (x==1) {
        if (y>3) {
            cout<<"grace marks =" <<"  "<<0<<endl;
        } else {
            cout<<"grace marks ="<<"  "<<5*y<<endl;
        }
    } else if (x==2) {
        if (y>2) {
            cout<<"grace marks ="<<"  "<<0<<endl;
        } else {
            cout<<"grace marks ="<<"  "<<4*y<<endl;
        }
    } else if (x==3) {
        if (y>1) {
            cout<<"grace marks ="<<"  "<<0<<endl;
        } else {
            cout<<"grace marks ="<<"  "<<5<<endl;
        }
    }
    return 0;
}