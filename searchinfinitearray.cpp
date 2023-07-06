#include <bits/stdc++.h>
using namespace std;

int searchone(int a[]) {
    int i=0;
    while(true) {
        if(a[i]==1) {
            return i;
        }
        i++;
    }
    return -1;
}

int main() {
    int a[]={0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1};
    cout<<searchone(a);
    return 0;
}