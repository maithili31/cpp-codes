#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
	    long long int n;
	    cin >> n;
	    cout << 2*((n+1)/2)*(n/2) << endl;
	}
	return 0;
}
