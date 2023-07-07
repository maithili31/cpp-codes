#include <bits/stdc++.h>
using namespace std;

int zeros(int n){
   int count = 0;
   for (int i=5;n/i>= 1;i*=5){
      int temp = n/i;
      count = count+temp;
   }
   return count;
}

int main(){
   int t;
   cin>>t;
   while(t--) {
       int n;
       cin>>n;
       cout<<zeros(n)<<endl;
    }
   return 0;
}