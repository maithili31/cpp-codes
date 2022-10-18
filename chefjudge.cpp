#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int a[n]={0};
	    int b[n]={0};
	    int maxa=0,suma=0;
	    int maxb=0,sumb=0;
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	        suma=suma+a[i]; 
	        if(a[i]>maxa){
                maxa=a[i];
            }
	    }
	    for(int i=0;i<n;i++){
	        cin>>b[i];
	        sumb=sumb+b[i]; 
	        if(b[i]>maxb){
                maxb=b[i];
            }
	    }
	    suma=suma-maxa;
	    sumb=sumb-maxb;
	    if(sumb>suma){
            cout<<"Alice"<<endl;
        }
	    else if (suma>sumb){
            cout<<"Bob"<<endl;
        }
	    else{
            cout<<"Draw"<<endl;
        }
	}
	return 0;
}