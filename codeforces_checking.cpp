#include <bits/stdc++.h>
using namespace std;
int main() {
    string s="codeforces";
    unordered_map<char,int> mp;
    for(int i=0;i<s.length();i++){
        mp[s[i]]++;
    }
    int t;
    cin>>t;
    char ch;
    while(t--){
        cin>>ch;
        if(mp.find(ch)!=mp.end()){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
