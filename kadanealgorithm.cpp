#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) {
        cin>>a[i];
    }
    int maxsum=INT_MIN;
    for(int i=0;i<n;i++) {
        int sum=0;  
        for(int j=i;j<n;j++) {
            sum+=a[j];
            if (sum>maxsum) {
                maxsum=sum;
            }
        }
    }
    cout<<maxsum<<endl;
    return 0;
}