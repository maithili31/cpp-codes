#include <bits/stdc++.h>
using namespace std;

int main () {
    int n,m;
    cin>>n>>m;

    int arr[n][m];

    for (int i=0;i<n;i++) {
        for (int j=0;j<m;j++) {
            cin>>arr[i][j];
        }
    }
    cout<<" Matrix is : \n " ;

    for (int i=0;i<n;i++) {
        for (int j=0;j<m;j++) {
            cout<<arr[i][j]<<" ";
        }
        cout << " \n ";
    }
    
    int x;
    cin>>x;

    for (int i=0;i<n;i++) {
        for (int j=0;j<m;j++) {
            if (arr[i][j]==x) {
                cout<<"Element found \n";
            } else 
            { cout <<" Element not found \n";}
        }
    }
}