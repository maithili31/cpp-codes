#include <iostream>
using namespace std;

int main() {
	int n,r;
	cin>>n>>r;
	int arr[n];
	for(int i=0;i<n;i++){
	    cin>>arr[i];
	    if(arr[i]>=r){
	        cout<<"good boi"<<endl;
	    }else{
	        cout<<"bad boi"<<endl;
	    }
	}
	return 0;
}