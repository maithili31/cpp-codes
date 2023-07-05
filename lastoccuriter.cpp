#include <bits/stdc++.h>
using namespace std;

int lastoccur(int a[],int n,int x) {
    int low=0,high=n-1;
    while(low<=high) {
        int mid=(low+high)/2;
        if(x>a[mid]) {
            low=mid+1;
        } else if (x<a[mid]) {
            high=mid-1;
        } else {
            if(mid== n-1 || a[mid+1]!=a[mid]) {
                return mid;
            } else {
                low=mid+1;
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
    cout<<lastoccur(a,n,x);

    return 0;
}