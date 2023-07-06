#include <bits/stdc++.h>
using namespace std;

int firstone(int a[],int n,int low,int high) {
    while(low<=high) {
        int mid=(high+low)/2;
        if(a[mid]==1 && (mid==0 || a[mid-1]==0)) {
            return mid;
        } else if(a[mid]==1) {
            high=mid-1;
        } else {
            low=mid+1;
        }
    }
}

int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) {
        cin>>a[i];
    }
    cout<<firstone(a,n,0,n-1);
    return 0;
}