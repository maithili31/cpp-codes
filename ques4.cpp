#include <bits/stdc++.h>
using namespace std;

int main () {
    int a,b;
    cin>>a>>b;
    string s1="";
    string s2="";
    for (int i=8;i>=0;i--) {
        if (a<pow(2,i)) {
            s1+='0';
        }
        else {
            a=a-pow(2,i);
            s1+='1';
        }
    }
    for (int i=8;i>=0;i--) {
        if (b<pow(2,i)) {
            s2+='0';
        }
        else {
            b=b-pow(2,i);
            s2+='1';
        }
    }
    string xo="";
    string ad="";
    string oo="";
    for (int i=8;i>=0;i--) {
        if (s1[i]==s2[i]) {
            xo+='0';
        } else {
            xo +='1';
        }
    }
    for (int i=8;i>=0;i--) {
        if (s1[i]==s2[i] && s1[i]=='1') {
            ad ='1'+ad;
        } else {
            ad='0'+ad;
        }
    }
    for (int i=8;i>=0;i--) {
        if (s1[i]==s2[i] && s1[i]=='0') {
            oo+='0';
        } else {
            oo+='1';
        }
    }
    cout<<ad<<endl;
    cout<<oo<<endl;
    cout<<xo<<endl;
    return 0;
}