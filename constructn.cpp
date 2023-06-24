#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        if (n>=7) {
            if ((n-7)%2==0 || n%7==0 || n%2==0) {
                cout<<"yes"<<endl;
            } else {
                cout<<"no"<<endl;
            }
        } else {
            if (n%2==0) {
                cout<<"yes"<<endl;
            } else {
                cout<<"no"<<endl;
            }
        }
    }
	return 0;
}
