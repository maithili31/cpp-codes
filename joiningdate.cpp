#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,k;
	    cin>>n>>k;
	    int a=n/5;
	    if(n%5!=0){
	        a++;
	    }
	    int b=k/5;
	    if(k%5!=0){
	        b++;
	    }
	    cout<<a-b<<endl;
	}
	return 0;
}