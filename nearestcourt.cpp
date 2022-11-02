#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    int a,b;
	    cin>>a>>b;
	    if((b-a)%2==0){
	         if(b>a)
	        cout<<((b-a)/2)<<endl;
	        else
	        cout<<((a-b)/2)<<endl;
	    }
	    else{
	        if(b>a)
	        cout<<((b-a)/2)+1<<endl;
	        else
	        cout<<((a-b)/2)+1<<endl;
	    }
	}
	return 0;
}
