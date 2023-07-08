#include <bits/stdc++.h>
using namespace std;

int searchone(int a[],int x) {
    if(a[0]==x) {
        return 0;
    }
    int i=1;
    while(a[i]<x) {
        i=i*2;
        i++;
    }
    return binary_search(a,a+i,x);
}

int main() {
    int a[]={0,0,1,1,3,6,7};
    int x;
    cin>>x;

    cout<<searchone(a,x);

    return 0;
}