#include <bits/stdc++.h>
using namespace std;

int facti(int n){
    if (n==0) {
        return 1;
    } else {
        return n*facti(n-1);
    }
}

int main() {
    int n;
    cin>>n;
     
    cout<<facti(n);
    return 0;
}
