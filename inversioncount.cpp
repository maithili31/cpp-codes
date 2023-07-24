#include <bits/stdc++.h>
using namespace std;

int countmerge(int a[],int l,int m,int r) {
	int n1=m-l+1;
	int n2=r-m;
	int left[n1],right[n2];
	for(int i=0;i<n1;i++) {
		left[i]=a[i+l];
	}
	for(int i=0;i<n2;i++) {
		right[i]=a[m+i+1];
	}
	int i=0,j=0,k=l;
	int ans=0;
	while(i<n1 && j<n2) {
		if(left[i]<=right[j]) {
			a[k]=left[i];
			i++;
		} else {
			a[k]=right[j];
			ans+=n1-i;
			j++;
		}
		k++;
	}
	while (i<n1) {
		a[k]=left[i];
		i++;
		k++;
	} 
	while (j<n2) {
		a[k]=right[j];
		j++;
		k++;
	}
	return ans;
}

int countin(int a[],int l,int r) {
	int ans=0;
	if(l<r) {
		int m=(r+l)/2;
		ans+=countin(a,l,m);
		ans+=countin(a,m+1,r);
		ans+=countmerge(a,l,m,r);
	}
	return ans;
}

int main() {
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++) {
		cin>>a[i];
	}
	cout<<countin(a,0,n-1);
	return 0;
}