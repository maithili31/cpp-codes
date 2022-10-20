#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--){
        int n;
        cin>>n;
        int a[n];
        int i,j,m=-1;
        for (i=0; i<n; i++){
            cin>>a[i];
        }
        for (i=0; i<n; i++){
            int count=0;
            for (j=0; j<n; j++){
                if (a[i]==a[j]){
                    count++;
                }
            }
            if (m<count){
                m=count;
            }
        }
        cout<<n-m<<endl;
    }
	return 0;
}
