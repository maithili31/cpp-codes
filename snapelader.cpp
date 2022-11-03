#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while (t--) {
	    int b,ls;
	    cin>>b>>ls;
	    double a= sqrt(ls*ls-b*b);
	    double c=sqrt(ls*ls+b*b);
	    cout<<a<<"  "<<c<<endl;
	}
	return 0;
}

