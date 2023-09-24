#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
    ll n;
    cin>>n;
    ll arr[n];
    unordered_map<ll,ll> mp;
    ll maxi=-1;
    for(ll i=0;i<n;i++){
        cin>>arr[i];
        mp[arr[i]]++;
        maxi=max(arr[i],maxi);
    }
    ll dp[100001];
    memset(dp,0,sizeof(dp));
    dp[0]=0;
    dp[1]=mp[1];
    for(ll i=2;i<=1e5;i++){
        dp[i]=max(dp[i-2]+mp[i]*i,dp[i-1]);
    }
    cout<<dp[maxi]<<endl;
    return 0;
}
