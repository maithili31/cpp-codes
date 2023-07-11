#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,k;
	    cin>>n>>k;
	    int a[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    int t=0;
	    for(int i=0;i<n;i++)
	    {
	        if(a[i]>=k)
	        {
	            a[i+1]=a[i+1]+a[i]-k;
	        }
	        else
	        {
	            t = i+1;
	            break;
	        }
	    }
	    if(t==0)
	      cout<<"YES"<<'\n';
	    else
	      cout<<"NO "<<t<<'\n';
	}
	return 0;
}
