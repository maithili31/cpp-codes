#include <bits/stdc++.h>
using namespace std;

int first(int a[],int low,int high, int x) {
    while(low<=high) {
        int mid=(high+low)/2;
        if(x>a[mid]) {
            low=mid+1;
        } else if (x<a[mid]) {
            high=mid-1;
        }else {
            if(mid==0 || a[mid-1]!=a[mid]) {
                return mid;
            } else {
                high=mid-1;
            }
        }
    }
    return -1;
}

int main() {
    int n,x;
    cin>>n>>x;
    int a[n];
    for(int i=0;i<n;i++) {
        cin>>a[i];
    }
    cout<<first(a,0,n-1,x);
    return 0;
}