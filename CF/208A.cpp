#include <bits/stdc++.h>
using namespace std;
int main(){
    string s; cin>>s;
    string w = "WUB";
    for(int i=0;i<s.size();){
        if(s.substr(i,3)==w){
            cout<<" ";
            i += 3;
        } else {
            cout<<s[i++];
        }
    }
}
