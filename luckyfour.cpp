#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
	    string s;
	    int i,c=0;
	    cin >> s;
	    for(i=0;i<s.size();i++){
	        if(s[i]=='4'){
	            c++;
	        }
	    }
	    cout << c << "\n";
    }
	return 0;
}