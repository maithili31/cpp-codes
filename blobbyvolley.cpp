#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
	    int n;
	    cin>>n;
	    string s;
	    cin>>s;
	    int count=0,ans=0;
	    if(s[0]=='A') {
	        count=1;
	    }
	    for(int i=0;i<n;i++) {
	        if(s[i]=='A' && s[i+1]=='A') {
	            count++;
	        } else if(s[i]=='B' && s[i+1]=='B') {
	            ans++;
	        }
	    }
	    cout<<count<<" "<<ans<<endl;
	}
	return 0;
}
