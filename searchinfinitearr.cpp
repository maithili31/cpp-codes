#include <bits/stdc++.h>
using namespace std;

int search(int a[],int i,int x) {
    int low=0,high=i;
    while(low<=high) {
        int mid=(high+low)/2;
        if(x>a[mid]) {
            low=mid+1;
        } else if (x<a[mid]) {
            high=mid-1;
        } else {
            return mid;
        }
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
        i++;
    }
    return search(a,i,x);
}

int main() {
    int a[]={0,0,1,1,3,6,7};
    int x;
    cin>>x;

    cout<<searchone(a,x);

    return 0;
}