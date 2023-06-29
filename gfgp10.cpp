#include <bits/stdc++.h>
using namespace std;

void r(int n) {
    if(n>0) {
        r(n-1);
        cout<<n<<" ";
    }
    return;
    
}

int main() {
    int n;
    cin>>n;
    r(n);
    return 0;
}