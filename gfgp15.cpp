#include <bits/stdc++.h>
using namespace std;

int index(int a[],int x, int y) {
    int sum=0;
    for (int i=x;i<=y;i++) {
        sum+=a[i];
    }
    return sum;
}

int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) {
        cin>>a[i];
    }
    int t;
    cin>>t;
    while (t--) {
        int x,y;
        cin>>x>>y;
        int z=index(a,x,y);
        cout<<z<<endl;
    }
    return 0;
}