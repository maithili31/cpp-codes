#include <bits/stdc++.h>
using namespace std;

int main () {
    int a[5];
    int temp;
    for (int i=0;i<5;i++) {
        cin>>a[i];
    }
    for (int i=0;i<5;i++) {
        for (int j=5;j>=0;j--) {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
    for (int i=0;i<5;i++) {
        cout<<a[i];
    }
    return 0;
}