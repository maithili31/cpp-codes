#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int temp=1;
    for(int i=1;i*i<=n;i++) {
        if(i*i==n) {
            temp=i;
            break;
        }
        temp=max(i,temp);
    }
    cout<<temp<<endl;
    return 0;
}