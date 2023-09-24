#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        unordered_map<char,int>mp;
        int n,m;
        cin>>n>>m;
        string s1,s2;
        cin>>s1>>s2;
        for(int i=0;i<n;i++){
            mp[s1[i]]++;
        }
        for(int i=0;i<m;i++){
            mp[s2[i]]++;
        }
        int count=0;
        bool isPalindrome=true;
        for(auto it:mp){
            if(it.second%2==1){
                count++;
            }
            if(count>1){
                isPalindrome=false;
                cout<<"No"<<endl;
                break;
            }
        }
        if(isPalindrome) cout<<"Yes"<<endl;
        mp.clear();
    }
    return 0;
}