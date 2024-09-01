#include<bits/stdc++.h>
using namespace std;

int sol(int n, int turn = 0){
    if(turn>=3){
        return 1;
    }
    return n*sol(n, turn+1);
    
}

int main(){
    
    int n = 2;
    cout<<sol(n);
    
    return 0;
}