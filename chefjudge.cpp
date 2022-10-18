#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int Alice[n]={0};
	    int Bob[n]={0};
	 long long int maxA=0,sumA=0;
	  long long int maxB=0,sumB=0;
	    for(int i=0;i<n;i++){
	        cin>>Alice[i]; //input in array
	        sumA=sumA+Alice[i];//total sum of alice 
	        if(Alice[i]>maxA){maxA=Alice[i];}//max time for alice 
	    }
	    for(int i=0;i<n;i++){
	        cin>>Bob[i];//input in array
	        sumB=sumB+Bob[i];//total sum of bob 
	        if(Bob[i]>maxB){maxB=Bob[i];}//max time for bob
	    }
	    //remove maximum time of all time 
	    sumA=sumA-maxA;
	    sumB=sumB-maxB;
	  //  output
	    if(sumB>sumA){cout<<"Alice"<<endl;}
	    else if (sumA>sumB){cout<<"Bob"<<endl;}
	    else{cout<<"Draw"<<endl;}
	}
	return 0;
}