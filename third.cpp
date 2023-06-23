#include<bits/stdc++.h>
using namespace std;

int main()
{   
    int a,b;
    cin>>a>>b;

    vector<int> v;
    for (int i=a;i<b;i++){
        for (int num= 2; num<=i; num++){
            if (i%num==0) {
                break;
            } else {
                v.push_back(i);
            }
        }
    }
    for (int i=0;i<v.size();i++) {
        cout<<v[i]<<" ";
    }
    return 0;
}