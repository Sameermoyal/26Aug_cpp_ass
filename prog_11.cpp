#include<bits/stdc++.h>
using namespace std;

int sol(int n, int k){
    if(k==0)return n;
    
    return sol(k,n%k);
}

int main(){
    
    int n =22;
    int k = 55;
    cout<<sol(n,k);
    
    return 0;
}