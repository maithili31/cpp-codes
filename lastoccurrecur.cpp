#include <bits/stdc++.h>
using namespace std;

int lastoccur(int a[],int low , int high , int x,int n) {
    if (low>high) {
        return -1;
    }
    int mid=(low+high)/2;
    if(x>a[mid]) {
        return lastoccur(a,mid+1,high,x,n);
    } else if (x<a[mid]) {
        return lastoccur(a,low,mid-1,x,n);
    } else {
        if(mid==n-1 || a[mid+1]!=a[mid]) {
            return mid;
        } else {
            return lastoccur(a,mid+1,high,x,n);
        }
    }
}

int main() {
    int n,x;
    cin>>n>>x;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<lastoccur(a,0,n-1,x,n);
    return 0;
}