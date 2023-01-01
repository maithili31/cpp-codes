#include <bits/stdc++.h>
using namespace std;

int main () {
    int n,element;
    cin>>n>>element;
    int a[n];
    //the array is input in the sorted form already.
    for (int i=0;i<n;i++) {
        cin>>a[i];
    }
    int start=0,end=n-1,mid;
    mid = (start+end)/2;
        if (a[mid]==element) {
            return mid;
        }
        else if (a[mid]<element) {
            start=mid+1;
        } else {
            end=mid-1;
        }
    for (int i=0;i<n;i++) {
        if (a[i]==element) {
            cout<<i<<"  "<<element<<endl;
        }
    }
    return 0;
}