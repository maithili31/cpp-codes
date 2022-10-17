#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    string a;
	    cin>>a;
	    int m=0,c=0,l=a.length();
	    string b[l],s[l];
	    for(int i=0;i<l;i++){
	       if(a[i]==')' && c!=0){
	            b[m]=s[c];
	            c--;
	            m++;
	       }
	       else if(a[i]=='('){
	           c++;
	       }
	       else if(a[i]=='+' || a[i]=='-' || a[i]=='*' ||a[i]=='/' || a[i]=='^' || a[i]=='%' )
	        {
	            s[c]=a[i];
	        }
	        else
	        {
	            b[m]=a[i];
	            m++;
	        } 
	    }
	    for(int i=0;i<l;i++)
	    {
	        cout<<b[i];
	    }
	    cout<<endl;
	}
	return 0;
}
