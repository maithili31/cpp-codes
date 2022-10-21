#include <bits/stdc++.h>
using namespace std;

int main () {
    int n;
    cin>>n;
    if (n>0 && n<12) {
        cout<<"AM"<<endl;
    } else if (n==12) {
        cout<<"noon"<<endl;
    } else if (n>12 && n<24) {
        cout<<"PM"<<endl;
    } else {
        cout<<"midnight"<<endl;
    }
    return 0;
}