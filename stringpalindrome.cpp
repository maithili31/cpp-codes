#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t;
    cin>>t;
    while (t--) {
        int n,q;
        cin>>n>>q;
        int a[n];
        int sum=0;
        int index=0;
        for (int i=0;i<n;i++) {
            cin>>a[i];
        }
        for (int i=0;i<n;i++) {
            if (a[0]>q && a[n-1]>q) {
                sum=0;
                break;
            } else {
                if (a[i]<q) {
                    sum +=a[i];
                } else {
                    index=i;
                    break;
                }
            }
        }
        for (int i=n-1;i>index;i--) {
            if (a[0]>q && a[n-1]>q) {
                sum=0;
                break;
            } else {
                if (a[i]<q) {
                    sum+=a[i];
                } else {
                    break;
                }
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}