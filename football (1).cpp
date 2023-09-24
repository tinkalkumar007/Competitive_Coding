#include <bits/stdc++.h>
using namespace std;
int main() {
    unordered_map<string,int> mp;
    int n;
    cin>>n;
    string s;
    while(n--){
        cin>>s;
        mp[s]++;
    }
    int cnt=mp[s];
    if(mp.size()==1) cout<<s<<endl;
    else{
    for(auto it:mp){
        if(it.first!=s){
            if(it.second>cnt){
                cout<<it.first<<endl;
            }
            else{
                cout<<s<<endl;
            }
        }
    }
    }
    return 0;
}
