#include<bits/stdc++.h>
using namespace std;
using ll=long long;
void solve(vector<ll> adj[],ll node,vector<ll> &dist){
    queue<ll> q;
    q.push(node);
    dist[node]=0;
    while(!q.empty()){
        ll it=q.front();
        q.pop();
        for(ll u:adj[it]){
            if(dist[u]==INT_MAX){
                dist[u]=1+dist[it];
                q.push(u);
            }
        }
    }
}
int main(){
    ll t;
    cin>>t;
    while(t--){
    ll n,m,a,b,c,u,v;
    cin>>n>>m>>a>>b>>c;
    --a;--b;--c;
    vector<ll> adj[n];
    ll price[m];
    for(auto &it:price) cin>>it;
    sort(price,price+m);
    vector<ll> pref(m+1);
    for(ll i=0;i<m;i++){
        pref[i+1]=pref[i]+price[i];
    }
    for(ll i=0;i<m;i++){
        cin>>u>>v;
        --u;--v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vector<ll> da(n+1,INT_MAX),db(n+1,INT_MAX),dc(n+1,INT_MAX);
    solve(adj,a,da);
    solve(adj,b,db);
    solve(adj,c,dc);
    ll ans=1e18;
    for(ll i=0;i<n;i++){
        if(da[i]+db[i]+dc[i]>m) continue;
        ans=min(ans,pref[db[i]]+pref[da[i]+db[i]+dc[i]]);
    }
    cout<<ans<<endl;
    }
    return 0;
}