#include<bits/stdc++.h>
using namespace std;

void sol(string s, string ans, int ind){
    
    if(ind == s.length()){
        cout<<ans<<" "<<endl;
        
        return;
    }
    
    sol(s,ans +s[ind], ind +1);
    
    sol(s,ans,ind+1);
}

int main(){
    
    string s = "kunal";
    sol(s,"", 0);
    
    return 0;
}