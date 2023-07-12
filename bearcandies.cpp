#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int a,b;
	    cin>>a>>b;
	    int l=0;
	    int o=0;
	    for(int i=1; i<=a; i++){
	        if((i*i)<=a) {
	            l=i;
	        }
	    }
	    for(int j=1; j<=b; j++){
	        if(((j*j)+j)<=b){
	            o=j;
	        }
	    }
	    if(l>o){
	        cout<<"limak"<<endl;
	    }
	    else{
	        cout<<"bob"<<endl;
	    }
	}
	return 0;
}
