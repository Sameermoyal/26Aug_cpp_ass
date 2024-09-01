#include<bits/stdc++.h>
using namespace std;

void sol(int n){
    if(n<1){
        return;
    }
    
    sol(n-1);
    cout<<n<<" ";
    
}

int main(){
    
    int n = 20;
    sol(n);
    
    return 0;
}