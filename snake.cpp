#include <bits/stdc++.h>
using namespace std;
int main() {
	int r;
	cin>>r;
	while(r--){
	    int l;
	    cin>>l;
	    string s;
	    cin>>s;
	    string sn;
	    for(int i=0;i<l;i++){
	        if(s[i]!='.')
	        sn=sn+s[i];
	    } 
	    bool ans=true;
	    if(sn.length()%2!=0)
	    ans=false;
	    else
	    {
	        for(int i=0;i<sn.length();i++)
	        {
	            if(i%2==0)
	            {
	                if(sn[i]=='T')
	                {ans=false;break;}
	                
	            }
	            else
	            {
	                if(sn[i]=='H')
	               { ans=false;break;}
	                
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

	
	    
	        