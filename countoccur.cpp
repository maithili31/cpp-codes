#include <bits/stdc++.h>
using namespace std;

int lo(int a[],int n,int x, int low , int high) {
    if(low>high) {
        return -1;
    }
    int mid=(low+high)/2;
    if(x>a[mid]) {
        return lo(a,n,x,mid+1,high);
    } else if(x<a[mid]) {
        return lo(a,n,x,low,mid-1);
    } else {
        if(mid==n-1 || a[mid+1]!=a[mid]) {
            return mid;
        } else {
            return lo(a,n,x,mid+1,high);
        }
    }
}

int fo(int a[],int n,int x,int low, int high) {
    if(low > high)
		return -1;

	int mid =(low+high)/2;
    if(x > a[mid]) {
        return fo(a,n,x,mid+1,high);
    }else if(x < a[mid]) {
        return fo(a,n,x,low,mid-1);
    } else {
		if(mid==0 || a[mid-1]!=a[mid]){
            return mid;
        } else {
            return fo(a,n,x,low,mid-1);
        }
	}
}

int main() {
    int n,x;
    cin>>n>>x;
    int a[n];
    for(int i=0;i<n;i++) {
        cin>>a[i];
    }
    if(fo(a,n,x,0,n-1)==-1) {
        cout<<-1<<endl;
    } else {
        cout<<lo(a,n,x,0,n-1)-fo(a,n,x,0,n-1);
    }
    return 0;
}