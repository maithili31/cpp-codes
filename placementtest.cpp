#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--)
	{
	    char first,second,third;
	    cin>>first>>second>>third;
	    
	    char x,y;
	    cin>>x>>y;
	    
	    if(x==first && (y==second ||y==third))
	    {
	        cout<<first<<endl;
	    }
	    
	    else if(x==second && y==third)
	    {
	        cout<<second<<endl;
	    }
	    
	    else if(y==second && (x==third))
	    {
	        cout<<second<<endl;
	    }
	    else if(y==first &&(x==second ||x==third))
	    {
	        cout<<first<<endl;
	    }
	}
	return 0;
}
