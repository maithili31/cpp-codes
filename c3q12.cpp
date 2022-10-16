#include <bits/stdc++.h>
using namespace std;

int main () {
    int x,y;
    cin>>x>>y;
    if (x==0 && y!=0) {
        cout<<"yaxis"<<endl;
    } else if (y==0 && x!=0) {
        cout<<"xaxis"<<endl;
    } else if (x==0 && y==0) {
        cout<<"origin"<<endl;
    }
    return 0;
}