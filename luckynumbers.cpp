#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while (t--) {
	    int x;
	    cin>>x;
	    int count=0;
	    while (x>0) {
	        int n=x%10;
	        if (n==7) {
	            count++;
	        }
	        x=x/10;
	    }
	    if (count!=0) {
	        cout<<"yes"<<endl;
	    } else {
	        cout<<"no"<<endl;
	    }
	}
	return 0;
}
