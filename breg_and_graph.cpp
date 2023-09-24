#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
    ll n,k;
    cin>>n;
    vector<vector<ll>> arr(n,vector<ll>(n,0));
    for(ll i=0;i<n;i++){
        for(ll j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    vector<vector<ll>> temp(arr.begin(),arr.end());
    for(ll x=0;x<n;x++){
        cin>>k;
        k--;
        ll ans=0;
        arr=temp;
        for(ll i=0;i<n;++i){
            for(ll j=0;j<n;++j){
                arr[i][j]=min(arr[i][j],arr[i][k]+arr[k][j]);
                ans+=arr[i][j];
            }
            temp[i][k]=0;
            temp[k][i]=0;
        }
        cout<<ans<<" ";
    }
    cout<<endl;
    return 0;
}