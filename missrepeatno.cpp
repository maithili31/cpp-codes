#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int a[n];
    int sum=0;
    for(int i=0;i<n;i++) {
        cin>>a[i];
        sum+=a[i];
    }
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            if(a[j]>a[i]) {
                int temp=a[i];  
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    int x=a[0];
    int r=0,m=0;
    for(int i=1;i<n;i++) {
        if(a[i]==a[i-1] || a[i]==a[i+1]) {
            r=a[i];
        } 
    }
    m=((n*(n+1))/2)-sum+r;
    cout<<m<<" "<<r<<endl;

    return 0;
}