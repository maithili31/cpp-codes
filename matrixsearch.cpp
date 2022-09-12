#include <bits/stdc++.h>
using namespace std;

int main () {
    int n,m;
    cin>>n>>m;
    int find ;
    cin>>find;

    int mx[n][m];

    for (int i=0;i<n;i++) {
        for (int j=0;j<m;j++) {
            cin>>mx[i][j];
        }
    }

    int r=0 ;
    int c=m;
    bool found=false;
    while (r<n && c>=0) {
        if (mx[r][c]==find) {
            found=true;
        }
        if (mx[r][c]>find) {
            c--;
        } else
         { 
            r++;
         }
    }
     if (found) {
        cout<<"element is found";
     } else 
     { cout<<"element not found";}

    cout<<endl;

    return 0;
}