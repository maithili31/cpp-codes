#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,k,i,x;
	    cin>>n>>k;
	    for(i=0;i<n;i++)
	    {
	        int x;
	        cin>>x;
	        if(x>k)
	        {
	            cout<<"0";
	        }
	        else
	        {
	            cout<<"1";
	            k=k-x;
	        }
	    }
	    cout<<endl;
	}
	return 0;
}
