#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    string a;
	    cin>>a;
	    for(int i=0;i<n;i++){
	        int count =0;
	        for(int j=0;j<n;j++){
	            if(a[i]==a[j]){
	                count++;
	            }
	        }
            if(count%2!=0){
	            cout<<"NO"<<endl;
	            break;
	        } else if(i==n-1) {
	            cout<<"YES"<<endl;
	        }
	    }
	}
	return 0;
}
