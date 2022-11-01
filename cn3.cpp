#include <bits/stdc++.h>
using namespace std;

int main () {
    int n;
    cin>>n;
    if (n%11==1) {
        cout<<0<<"  "<<n<<endl;
    } else {
        n=2*n;
        if (n%11==1) {
            cout<<n<<endl;
        }
    }
    return 0;
}