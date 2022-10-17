#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int count=0;
	    string s;
	    cin>>s;
	    int max=0;
        for(int i=0;i<n;i++){
    	    if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
    	        count=0;
    	    }
    	     else {
    	    count++;
            }
    	    if(count>max){
            max=count;
            }
    	}
    	if(max>=4){
          cout<<"NO"<<endl;
        }
    	else {
          cout<<"YES"<<endl;
        }
	}
	return 0;
}
