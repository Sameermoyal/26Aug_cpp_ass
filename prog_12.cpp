#include<bits/stdc++.h>
using namespace std;

int sol(int a, int b, int ans=0){
    if(a==0 || b==0) return 0;
    if(ans == 0) ans = max(a,b);
    if(ans % a == 0 && ans % b == 0){
        return ans;
    }
    return sol(a,b,ans+1);
}

int main(){
    
    int a =22;
    int b = 55;
    cout<<sol(a,b);
    
    return 0;
}