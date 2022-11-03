#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while (t--){
	    int a,b;
	    cin>>a>>b;
	    if((b-a)%2==0){
	         if(b>a) {
                cout<<((b-a)/2)<<endl;
             } else {
                cout<<((a-b)/2)<<endl;
             }
	    }
	    else {
	        if(b>a) {
                cout<<((b-a)/2)+1<<endl;
            } else {
                cout<<((a-b)/2)+1<<endl;
            }
	    }
	}
	return 0;
}
