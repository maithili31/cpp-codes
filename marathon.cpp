#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int D,d,A,B,C;
	    cin>>D>>d>>A>>B>>C;
	    if(42 <= D*d)
	    {
	        cout<<C<<endl;
	    }
	    else if(21 <= D*d)
	    {
	        cout<<B<<endl;
	    }
	    else if(10 <= D*d)
	    {
	        cout<<A<<endl;
	    }
	    else{
	        cout<<"0"<<endl;
	    }
	}
	return 0;
}
