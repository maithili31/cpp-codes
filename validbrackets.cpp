#include <bits/stdc++.h>
using namespace std;

bool isValid(string s) {
    int n=s.size();
    stack<char> st;
    bool ans=true;
    for(int i=0;i<n;i++) {
        if(s[i]=='(' || s[i]=='{' || s[i]=='[') {
            st.push(s[i]);
        }
        else if (s[i]==')') {
            if(st.top()=='(') {
                st.pop();
            } else {
                ans=false;
                break;
            }
        }
        else if (s[i]=='}') {
            if(st.top()=='{') {
                st.pop();
            } else {
                ans=false;
                break;
            }
        }
        else if (s[i]==']') {
            if(st.top()=='[') {
                st.pop();
            } else {
                ans=false;
                break;
            }
        }
    } 
    return ans;           
}

int main() {
    string s;
    cin>>s;

    if(isValid(s)==true) {
        cout<<"true"<<endl;
    } else {
        cout<<"false"<<endl;
    }
    return 0;
}
