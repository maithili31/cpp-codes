#include <bits/stdc++.h>
using namespace std;

int main () {
    int number,binary,t=1;
    cin>>number;
    while (number>0) {
        int x=number%2;
        binary = binary + x*t;
        number = number/2;
        t = t*10;
    }
    cout<<"the converted number is " << binary <<endl;
    return 0;
}