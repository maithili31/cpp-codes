#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
    cin>>t;
	while(t--) {
	    int n;
        cin>>n;
	    int s[n];
	    for(int i=0;i<n;i++) {
	        cin>>s[i];
	    }
	    string str;
	    cin>>str;
	    int m = INT_MAX;
	    for(int i=0;i<n;i++) {
	       if(str[i] == '0'){
	          m = min(m,s[i]); 
	       } 
	    }
	    
	    cout<<m<<endl;
	    
	}
	return 0;
}
