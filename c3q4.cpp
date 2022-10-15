#include <bits/stdc++.h>
using namespace std;

int main () {
    int x;
    cin>>x;
    if (x%7==0) {
        cout<<"tuesday"<<endl;
    } else if (x%7==1) {
        cout<<"wednesday"<<endl;
    } else if (x%7==2) {
        cout<<"thursday"<<endl;
    } else if (x%7==3) {
        cout<<"friday"<<endl;
    } else if (x%7==4) {
        cout<<"saturday"<<endl;
    } else if (x%7==5) {
        cout<<"sunday"<<endl;
    } else if (x%7==6) {
        cout<<"monday"<<endl;
    }
    return 0;
}