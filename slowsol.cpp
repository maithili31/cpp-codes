	#include <bits/stdc++.h>
    using namespace std;

    int main () {
        int t;
	    cin>>t;
	    while(t--){
	        int t, n , sum ;
	        cin >> t >> n >> sum ;
	        int rem = 0 ;
	        if (t * n > sum){
	            if (sum >= n){
	                t = sum / n;
	                rem = sum % n;
	            }else{
                    break;
                }
            }
	    cout << (t * (n * n)) + (rem * rem) << endl ;
	}
	return 0;
}