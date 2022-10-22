#include <bits/stdc++.h>
using namespace std;

int check (int n) {
    if (n%4==0) {
        cout<<"leap year"<<endl;
    } else {
        cout<<"not a leap year"<<endl;
    }
    return 0;
}
int main () {
    int n;
    cin>>n;
    int c=check(n);
    cout<<c<<endl;
    return 0;
}