#include <bits/stdc++.h>
using namespace std;

void reverse(int n) {
    if (n<=0) {
        return ;
    } else {
        cout<<n<<" ";
    }
    return reverse (n-1);
}


int main() {
    int n;
    cin>>n;
    reverse(n);
    return 0;
}