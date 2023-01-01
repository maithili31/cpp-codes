#include <bits/stdc++.h>
using namespace std;

int binarysearch ( int arr[] ,int n, int element) {
    int s=0;
    int e=n-1;
    while (s<=e) {
        int mid = (s+e)/2; 
        if (arr[mid]==element) {
            return mid;
        }
        else if (arr[mid]>element) {
            e=mid-1;
        } else {
            s=mid+1;
        }
    }
    return -1;
}

int main () {
    int n;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++) {
        cin>>arr[i];
    }
    int element;
    cin>>element;
    cout<<binarysearch(arr,n,element)<<endl;
    return 0;
}