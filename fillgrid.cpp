#include <iostream>
using namespace std;

int main () {
    int t;
    cin>>t;
    while (t--) {
        int n,m;
        cin>>n>>m;
        if (m%2==0) {
            if (n%2==0) {
                cout<<0<<endl;
            } else {
                cout<<m<<endl;
            }
        } else {
            if (n%2==0) {
                cout<<n<<endl;
            } else {
                cout<<(n+m)-1<<endl;
            }
        }
    }
    return 0;
}