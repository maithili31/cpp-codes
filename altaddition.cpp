#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while (t--) {
	    int a,b;
	    cin>>a>>b;
	    int i=1;
	    int count=0;
	    while (a<b) {
	        if (i%2!=0) {
	            a=a+1;
	        } else {
	            a=a+2;
	        }
	        if (a==b) {
	            count++;
	            break;
	        } else {
	            count=count;
	        }
	        i++;
	    }
	    if (count==1) {
	        cout<<"yes"<<endl;
	    } else {
	        cout<<"no"<<endl;
	    }
	}
	return 0;
}
