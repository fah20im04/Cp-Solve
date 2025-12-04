#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, ans=1; 
    cin>>n;
    string prev, cur;
    cin>>prev;
    for(int i=1;i<n;i++){
        cin>>cur;
        if(cur!=prev) ans++;
        prev = cur;
    }
    cout<<ans;
}
