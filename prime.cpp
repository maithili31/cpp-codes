#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int count=0;
    for (int i=2;i<n;i++) {
        for (int j=i;j<=i/2;++j) {
            if (i%j==0) {
                break;
            } else {
                count++;
            }
        }
    }
    cout<<count<<endl;
    
}
