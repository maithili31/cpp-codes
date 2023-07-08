#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int t=n;
    if(n<=0) {
        cout<<"False"<<endl;
    } else {
        int x=0;
        while(n!=0) {
            int r=n%10;
            x=x*10+r;
            n=n/10;
        }
        if(x==t) {
            cout<<"true"<<endl;
        }
    }
    return 0;
}