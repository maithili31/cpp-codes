#include <bits/stdc++.h>
using namespace std;

int countones(int a[], int n)
{
	int low = 0, high = n - 1;

	while(low <= high)
	{
		int mid = (low + high) / 2;

		if(a[mid] == 0)
			low = mid + 1;
		else
		{
			if(mid == 0 || a[mid - 1] == 0)
				return (n - mid);
			else 
				high = mid -1;
		}
	}

	return 0;		
}

int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) {
        cin>>a[i];
    }
    cout<<countones(a,n);
    return 0;
}