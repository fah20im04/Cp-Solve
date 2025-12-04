#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    int coins[] = {100,20,10,5,1};
    int ans=0;
    for(int c:coins){
        ans += n/c;
        n %= c;
    }
    cout<<ans;
}
