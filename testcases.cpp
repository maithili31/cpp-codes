#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;cin>>t;
	
	while(t--) {
	    int n;cin>>n;
	    int s[n];
	    for(int i=0;i<n;i++) {
	        cin>>s[i];
	    }
	    string str;
	    cin>>str;
	    int minx = INT_MAX;
	    for(int i=0;i<n;i++) {
	       if(str[i] == '0'){
	          minx = min(minx,s[i]); 
	       } 
	    }
	    
	    cout<<minx<<endl;
	    
	}
	return 0;
}
