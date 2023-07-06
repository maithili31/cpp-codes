#include <bits/stdc++.h>
using namespace std;

int search(int a[],int x,int low,int high) {
    if(low>high) {
        return -1;
    }    
	int mid=(low+high)/2;

	if(x>a[mid]) {
        return search(a, x,mid + 1, high);
    }
	else if(x<a[mid]) {
        return search(a,x,low,mid-1);
    }
    else
    {
        return mid;
	}
    return -1;
}

int searchone(int a[],int x) {
    if(a[0]==x) {
        return 0;
    }
    int i=1;
    while(a[i]<x) {
        i=i*2;
        if(a[i]==x) {
            return i;
        }
    }
    return search(a,x,(i/2)+1,i-1);
}

int main() {
    int a[]={0,0,1,1,3,6,7};
    int x;
    cin>>x;

    cout<<searchone(a,x);

    return 0;
}