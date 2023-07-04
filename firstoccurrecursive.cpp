#include <bits/stdc++.h>
using namespace std;

int fo(int a[], int low, int high, int x)
{
	if(low > high)
		return -1;

	int mid = (low + high) / 2;

	if(x > a[mid])
		return fo(a, mid + 1, high, x);

	else if(x < a[mid])
		return fo(a, low, mid - 1, x);

	else
	{
		if(mid == 0 || a[mid - 1] != a[mid])
			return mid;

		else
			return fo(a, low, mid - 1, x);
	}
}

int main() {
    int n,x;
    cin>>n>>x;

    int a[n];
    for(int i=0;i<n;i++) {
        cin>>a[i];
    }
    cout<<fo(a,0,n-1,x);

    return 0;
}