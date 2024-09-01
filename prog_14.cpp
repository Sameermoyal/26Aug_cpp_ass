#include<bits/stdc++.h>
using namespace std;

int sol(vector<int> arr , int n){
    
    if(n>=arr.size()){
        return 0;
    }
    int maxi=sol(arr, n+1);;
    
    
    return max(maxi,arr[n]);
}

int main(){
    
    vector<int> arr = {1,2,3,4,5,6,7,4,1};
    int n = 0;
    cout<<sol(arr, n);
    
    return 0;
}