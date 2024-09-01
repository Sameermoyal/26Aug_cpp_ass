#include<bits/stdc++.h>
using namespace std;

int sol(vector<int> arr, int s){
    if(s>=arr.size()){
        return 0;
    }
    return arr[s] + sol(arr, s+1);
    
}

int main(){
    
    vector<int> arr = {1,2,3,4,5};
    cout<<sol(arr, 0);
    
    return 0;
}