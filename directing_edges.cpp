#include<bits/stdc++.h>
using namespace std;
void dfs(vector<int> adj[],int node,vector<int> &vis,vector<int> &ord){
    vis[node]=true;
    for(int it:adj[node]){
        if(!vis[it]){
            dfs(adj,it,vis,ord);
        }
    }
    ord.push_back(node);
    return;
}
int main(){
    int t,n,m,d,u,v;
    for(cin>>t;t>0;t--){
        cin>>n>>m;
        vector<int> adj[n+1];
        vector<int> vis(n+1,0);
        vector<pair<int,int>> edge;
        for(int j=0;j<m;j++){
            cin>>d>>u>>v;
            if(d){
                adj[u].push_back(v);
            }
            edge.push_back({u,v});
        }
        vector<int> ord;
        for(int i=1;i<=n;i++){
            if(!vis[i]){
                dfs(adj,i,vis,ord);
            }
        }
        reverse(ord.begin(),ord.end());
        vector<int> pos(n+1);
        for(int i=1;i<=n;i++){
            pos[ord[i-1]]=i;
        }
        bool bad=false;
        for(int i=1;i<=n;i++){
            for(int j:adj[i]){
                if(pos[i]>pos[j]){
                    bad=true;
                    break;
                }
            }
        }
        if(bad){
            cout<<"No"<<endl;
        }
        else{
            cout<<"Yes"<<endl;
            for(auto [x,y]:edge){
                if(pos[x]<pos[y]){
                    cout<<x<<" "<<y<<endl;
                }
                else{
                    cout<<y<<" "<<x<<endl;
                }
            }
        }
    }
    return 0;
}