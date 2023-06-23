#include<bits/stdc++.h>
using namespace std;

int main()
{   
    int a,b;
    cin>>a>>b;

    for (int i=a;i<b;i++){
        for (int num= 2; num<=i; num++){
            if (i%num==0) {
                break;
            } else {
                cout<<i<<endl;
            }
        }
    }
    return 0;
}