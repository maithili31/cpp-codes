#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int t, b, ls;
	cin>>t;
	while(t--)
	{
	    cin>>b>>ls;
	    cout<<sqrt(ls*ls-b*b)<<' '<<sqrt(ls*ls+b*b)<<endl;
	}
	return 0;
}
