#include <bits/stdc++.h>
using namespace std;

int main () {
    float factorial,sum=0;
    float term;
    for (int i=1;i<=7;i++) {
        factorial=i;
        for (int j=1;j<i;j++) {
            factorial=j*factorial;
            term=i/factorial;
            sum += term;
        }
    }
    cout<<sum<<endl;
    return 0;
}