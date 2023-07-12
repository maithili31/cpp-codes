#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    string s;
	    cin>>s;
	    int n=s.length();
	    if(n==1){
	        cout<<s[0]-'0'<<endl;
	    }
	    else{
	        int ans=(s[n-2]-'0')*10+(s[n-1]-'0');
	        cout<<ans%20<<endl;
	    }
	}
	return 0;
}
