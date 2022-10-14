#include <iostream>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    string s;
	    int i=0,c=0;
	    cin>>s;
	    for (int i=0;i<s.size();i=i+2) {
	        if(s[i]=='A'&&s[i+1]=='A') {
	            break;
	        }
	        else if(s[i]=='B'&&s[i+1]=='B') {
	            break;
	        }
	        else {
	           c=c+2;
	        }
	    }
	    if(c==s.size()) {
	        cout<<"yes"<<endl;
	    }
	    else {
	        cout<<"no"<<endl;
	    }
	}
	return 0;
}