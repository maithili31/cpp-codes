#include <iostream>
using namespace std;

int main() {

	int t;
	cin>>t;
	while(t--){
	    int n,b;
	    int a=0;
	    int f=0;
	    cin>>n>>b;
	    for(int i=0;i<n;i++)
	    {
	        int w,h,p;
	         cin>>w>>h>>p;
	         if(p<=b)
	        {
	            if(a<w*h)
	                a=w*h;
	                f=1;
	        }  
	    
	    }
	    if(f==1)
	        cout<<a<<endl;
	   else
	        cout<<"no tablet"<<endl;
	        
	}
	return 0;
}
