#include <bits/stdc++.h>
using namespace std;

int search(int arr[], int low, int high, int x)
{
	if(low > high)
		return -1;

	int mid = (low + high) / 2;

	if(arr[mid] == x)
		return mid;

	else if(arr[mid] > x)
		return search(arr, low, mid - 1, x);

	else
		return search(arr, mid + 1, high, x);
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
    return search(a,(i/2)+1,i,x);
}

int main() {
    int a[]={0,0,1,1,3,6,7};
    int x;
    cin>>x;

    cout<<searchone(a,x);

    return 0;
}