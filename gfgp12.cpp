#include <bits/stdc++.h>
using namespace std;

bool palcheck(string s,int start,int end) {
    if (start>=end) {
        return true;
    }
    return (s[start]==s[end]) && palcheck(s,start+1,end-1);

}

int main() {
    string s;
    cin>>s;

    palcheck(s,0,s.length());
    if (palcheck) {
        cout<<"yes"<<endl;
    } else {
        cout<<"no"<<endl;
    }
    return 0;
}