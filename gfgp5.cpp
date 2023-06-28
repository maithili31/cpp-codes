#include <bits/stdc++.h>
using namespace std;

int zero(int n) {
    int count=0;
    for(int i=5;i<=n;i=i*5) {
        count=count+(n/i);
    }
    return count;
}

int main() {
    int n;
    cin>>n;
    cout<<zero(n);
    return 0;
}