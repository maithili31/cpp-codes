#include <bits/stdc++.h>
using namespace std;

int main () {
    int n;
    cin>>n;
    int a[n]={ };
    int sum1=0,sum2=0;
    for (int i=0;i<n;i++) {
        cin>>a[i];
        if (a[i]%2==0) {
            if (i%2==0) {
                sum1=sum1+a[i];
            } else {
                sum1=sum1;
            }
        } else {
            if (i%2!=0) {
                sum2=sum2+a[i];
            } else {
                sum2=sum2;
            }
        }
    }
    cout<<sum1<<"  "<<sum2<<endl;
    return 0;
}