#include<bits/stdc++.h>
using namespace std;

int sol(int n){
    if(n==0){
        return 1;
    }else{
        return n * sol(n-1);
    }
    
}

int main(){
    
    int n = 10;
    cout<<sol(n);
    
    return 0;
}