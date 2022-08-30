#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for (int n=0;n<100;n++){
    if (n%3==0){
        continue;
    }
    cout<<n<<endl;
    }
    
}