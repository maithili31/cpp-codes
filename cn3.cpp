#include <bits/stdc++.h>
using namespace std;

int main () {
    int n;
    cin>>n;
    int fullmoons=0;
    while (!(n%11==1)) {
        fullmoons +=1;
        n=2*n;
    }
    cout<<fullmoons<<"  "<<n<<endl;
    return 0;
}