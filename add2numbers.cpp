#include<bits/stdc++.h>
using namespace std;


vector<int> add2nos(vector<int> &arr){

    for(int i=0; i<5; i++){
        cout<<arr[i]<<" ";
    }
    int size = arr.size();
    vector<int> ans(size);

    for(int i=0; i<size; i++){
        ans[i]=arr[i]+2;
    }
    return ans;
}


int main(){
    vector<int> arr;
    for(int i=0; i<5; i++){
        arr.push_back(i+1);
    }

    // int t = 1;
    // int size = 5;
    // while(size){
    //     arr.push_back(t);
    //     t++;
    //     size--;
    // }

    vector<int> ans = add2nos(arr);

    for(int i=0; i<5; i++){
        cout<<ans[i]<<" ";
    }
}