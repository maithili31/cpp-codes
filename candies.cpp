#include <bits/stdc++.h>
using namespace std;

int  main () {
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        int a[2*n];
        for (int i=0;i<2*n;i++) {
            cin>>a[i];
        }
        int count=0;
        for (int i=0;i<(2*n)-1;i++) {
            for(int j=i;j<2*n;j++){
                if (a[i]==a[j]) {
                    count++;
                }
            }
        }
        if (count==3) {
            cout<<"Yes"<<endl;
            break;
        } else {
            cout<<"No"<<endl;
        }
    }
    return 0;
}