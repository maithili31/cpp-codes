#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int i,j,m,n,k;
        cin>>m;
        int a[m+1];
        cin>>n;
        a[0]=0;
        for(i=1;i<=m;i++){
            cin>>a[i];
        }
        for(i=m;i>=0;i--){
            if(a[i]<n){
                k=i;
                break;
            }
        }
        cout<<k<<endl;
    }
	return 0;
}
