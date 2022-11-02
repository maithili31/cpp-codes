#include <bits/stdc++.h>
using namespace std;



void sol()
{
    int a,b;
    cin>>a>>b;
    
    if((a+b)%2==0)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}
int main() {
	// your code goes here
	int t;
	cin>>t;
	
	while(t--)
	sol();
	return 0;
}
