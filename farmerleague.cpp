#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while (t--) {
	    int n;
	    cin>>n;
	    int x=(n-1)*3;
	    int y=((n-2)-((n-2)/2));
	    cout<<(x-(y*3))<<endl;
	}
	return 0;
}
