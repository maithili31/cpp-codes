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
        sort(a,a+n,greater<int>());
        int sum=a[0];
        for(int i=0;i<n;i++) {
            if(a[i]!=a[0]) {
                sum+=a[i];
                break;
            }
        }
        cout<<sum<<endl;
    }
	return 0;
}
