#include<bits/stdc++.h>
using namespace std;

void sol(vector<int> arr , int n){
    
    if(n<0){
        return;
    }
    cout<<arr[n]<<" ";
    sol(arr, n-1);
}

int main(){
    
    vector<int> arr = {1,2,3,4,5,6,7};
    int n = arr.size()-1;
    sol(arr, n);
    
    return 0;
}