#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, ans=0; 
    cin>>n;
    vector<pair<int,int>> v(n);
    for(auto &p:v) cin>>p.first>>p.second;
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            if(i!=j && v[i].first==v[j].second) ans++;
    cout<<ans;
}
