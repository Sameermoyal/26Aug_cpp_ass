#include<bits/stdc++.h>
using namespace std;

string sol(string &s,int ind){
    if(ind< 0){
        return "";
    }
    
    return s[ind] + sol(s,ind-1);
    
}

int main(){
    
    string s = "kunal";
    string tem = sol(s,s.length()-1);
    if(s==tem){
        cout<<"it's palindrome";
    }else{
        cout<<"it's not palindrome";
    }
    
    return 0;
}