#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n ;
    cin>>n;
    int count=1;

    for (int i=1;i<=n;i++) {
        for (int j=i; j<=i;j++){
            cout<<count<<" ";
            count++;

        }
    }
    cout<<endl;



}