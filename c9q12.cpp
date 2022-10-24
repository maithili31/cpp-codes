#include <bits/stdc++.h>
using namespace std;

int rec (int n) {
    int f;
    if (n==1) {
        return (1);
    } else {
        f=n*rec(n-1);
        return (f);
    }
}

int main () {
    int n;
    cin>>n;
    int fact;
    fact=rec(n);
    cout<<fact<<endl;
    return 0;
}
