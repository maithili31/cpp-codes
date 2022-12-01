#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while (t--) {
	    int n,a,b;
	    cin>>n;
	    cin>>a>>b;
	    int arr[n];
	    for (int i=0;i<n;i++) {
	        cin>>arr[i];
        }
	    double countA=0,countB=0;
	    for (int i=0;i<n;i++) {
	        if (arr[i]==b) {
                countA++;
            }
	        if (arr[i]==b) {
                countB++;
            }
	    }
	    double ans;
	    ans = (countA/n)*(countB/n);
	    cout<<ans<<endl;
	}
	return 0;
}