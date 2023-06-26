#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        int a[n];
        
        double count=0,sum=0;
        
        for (int i=0;i<n;i++) {
            cin>>a[i];
            sum+=a[i];
            
            double x=double(sum/(i+1))*100;
            
            if (x==100) {
                count++;
            } else {
                continue;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}