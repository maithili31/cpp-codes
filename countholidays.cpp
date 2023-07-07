#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++) {
	        cin>>a[i];
	    }
	    set<int> s;
	    for(int i=6;i<30;i=i+7) {
            s.insert(i);
	    }
	    for(int i=7;i<30;i=i+7) {
	        s.insert(i);
	    }
	    for(int i=0;i<n;i++) {
	        s.insert(a[i]);
	    }
	    cout<<s.size()<<endl;
	}
	return 0;
}
