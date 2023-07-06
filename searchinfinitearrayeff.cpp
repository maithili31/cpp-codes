#include <bits/stdc++.h>
using namespace std;

int search(int a[],int x,int low,int high) {
    if(low>high) {
        return -1;
    }    
	int mid=(low+high)/2;

	if(x>a[mid]) {
        return search(a, 1,mid + 1, high);
    }
	else if(x<a[mid]) {
        return search(a,1,low,mid-1);
    }
    else
    {
        return mid;
	}
    return -1;
}

int searchone(int a[]) {
    if(a[0]==1) {
        return 0;
    }
    int i=1;
    while(a[i]<1) {
        i=i*2;
        if(a[i]==1) {
            return i;
        }
    }
    return search(a,1,(i/2)+1,i-1);
}

int main() {
    int a[]={0,0,1,1,1,1,1,1,1,1,1,1};

    cout<<searchone(a);

    return 0;
}