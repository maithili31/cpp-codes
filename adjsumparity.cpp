#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int sum = 0;
	    int arr[n];
	    for(int i = 0;i<n;i++)
	    {
	        cin>>arr[i];
	        sum = sum+arr[i];
	    }
	    if(sum%2==0)
	    cout<<"YES\n";
	    else
	    cout<<"NO\n";
	}
	return 0;
}
