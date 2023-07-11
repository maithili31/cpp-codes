#include <iostream>
using namespace std;

int main() {
	
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int sum = 0;
	    int a[n];
	    for(int i = 0;i<n;i++)
	    {
	        cin>>a[i];
	        sum = sum+a[i];
	    }
	    if(sum%2==0)
	    cout<<"yes"<<endl;
	    else
	    cout<<"no"<<endl;
	}
	return 0;
}
