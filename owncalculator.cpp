#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	long double a,b;
	char c;
	cin>>a>>b>>c;
	if (c=='+')
	cout<<a+b<<endl;
	else if (c=='-')
	cout<<a-b<<endl;
	else if (c=='*')
	cout<<a*b<<endl;
	else
	cout<<fixed<<setprecision(7)<<double(a)/b<<endl;
	return 0;
}
