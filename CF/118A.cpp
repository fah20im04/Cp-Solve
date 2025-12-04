#include <bits/stdc++.h>
using namespace std;
int main(){
    string s; cin>>s;
    for(char &c: s) c = tolower(c);
    for(char c:s){
        if(string("aeiouy").find(c)==string::npos)
            cout<<"."<<c;
    }
}
