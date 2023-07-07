#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
	    int a,b;
	    cin>>a>>b;
	    int x=max(a,b);
	    int y=a+b;
	    cout<<x<<" "<<y<<endl;
	}
	return 0;
}
