#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--){
	    int l;
	    cin>>l;

	    string s;
	    cin>>s;

	    string st;

	    for(int i=0;i<l;i++){
	        if(s[i]!='.')
	        st=st+s[i];
	    } 
	    bool ans=true;
	    if(st.length()%2!=0) {
            ans=false;
        } else {
	        for(int i=0;i<st.length();i++) {
	            if(i%2==0) {
	                if(st[i]=='T'){
                        ans=false;
                        break;
                    }
	                
	            } else {
	                if(st[i]=='H') { 
                        ans=false;
                        break;
                    }
	            }
	        }
	    }
        
	    if(ans==true)
	    cout<<"Valid"<<endl;
	    else
	    cout<<"Invalid"<<endl;
	    
	}
	return 0;
}

	
	    
	        