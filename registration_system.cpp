#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    unordered_map<string,int> mp;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        if(mp.find(s)!=mp.end()){
            cout<<s<<mp[s]<<endl;
            mp[s]++;
        }
        else{
            cout<<"OK"<<endl;
            mp[s]=1;
        }
    }
    return 0;
}
