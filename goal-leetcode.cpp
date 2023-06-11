#include <bits/stdc++.h>
using namespace std;

    string interpret(string command) {
        string ans;
        for (int i=0;i<command.length();i++) {
            if (command[i]=='G') {
                ans += 'G';
            } else if (command[i]=='(' && command[i+1]==')') {
                ans += 'o';
            } else if (command[i]=='a') {
                string s1="a";
                string s2="l";
                s1.append(s2);
                ans+=s1;
            }
        }
        return ans;
    }

    int main () {
        string command;
        cin>>command;
        
        string x= interpret(command);
        cout<<x;
    }

