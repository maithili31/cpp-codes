#include <iostream>
using namespace std;

int main() {
	int n,s;
	cin>>n;
	int p1[n],p2[n];
	int lead=0,leader=0;
	int s1=0,s2=0;
	for (int i=0;i<n;i++) {
	    cin>>p1[i]>>p2[i];
	    s1 += p1[i];
	    s2 += p2[i];
	    s=s1-s2;
	    if (s>0) {
	        if (lead<s) {
	            lead=s;
	            leader=1;
	        } else {
	            lead=lead;
	            leader=1;
	        }
	    } else {
	        if (lead<=(s*-1)) {
	            lead=s*(-1);
	            leader=2;
	        } else {
	            lead=lead;
	            leader=1;
	        }
	    } 
	}
	 
	cout<<leader<<"  "<<lead<<endl;
	
	
	return 0;
}
