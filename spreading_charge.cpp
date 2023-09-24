#include<bits/stdc++.h>
using namespace std;
int solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    queue<int> q;
    for(int i=0;i<n;i++){
        if(s[i]!='0'){
            q.push(i);
        }
    }
    bool vis[n]={false};
    while(!q.empty()){
        int k=q.size();
        for(int i=0;i<k;i++){
            int idx=q.front();
            q.pop();
            if(idx-1>=0 && s[idx-1]=='0' && !vis[idx-1]){
                s[idx-1]=s[]
            }
        }
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        cout<<solve()<<endl;
    }
    return 0;
}