#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
    ll n,k;
    cin>>n;
    vector<vector<ll>> arr(n,vector<ll>(n));
    for(ll i=0;i<n;i++){
        for(ll j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    vector<ll> ord(n),vis(n,0),res(n); 
    for(int i=0;i<n;i++){
        cin>>ord[i];
        ord[i]--;
    }

    for(ll x=n-1;x>=0;x--){
        k=ord[x];
        ll ans=0;
        vis[k]=true;
        for(ll i=0;i<n;++i){
            for(ll j=0;j<n;++j){
                arr[i][j]=min(arr[i][j],arr[i][k]+arr[k][j]);
                if(vis[i] && vis[j]) ans+=arr[i][j];
            }
        }
        res[x]=ans;
    }
    for(int i=0;i<n;i++){
        cout<<res[i]<<" ";
    }
    //cout<<endl;
    return 0;
}