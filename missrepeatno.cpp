#include <bits/stdc++.h>
using namespace std;

int fact(int n) {
    if(n==1) {
        return 1;
    }
    return n*fact(n-1);
}

int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) {
        cin>>a[i];
    }
    int m=1,r=0;
    int sum=0,sum1=(n*(n+1))/2;
    for(int i=0;i<n;i++) {
        sum+=a[i];
    }
    m=sum1-sum;
    int pro=fact(n),prod=a[0];
    for(int i=1;i<n;i++) {
        prod=prod*a[i];
    }
    r=(pro*r)/prod;
    cout<<m<<" "<<r<<endl;
    return 0;
}