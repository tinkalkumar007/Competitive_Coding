#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll digit_sum(ll no){
    ll result=0;
    while(no){
        result+=(no%10);
        no=no/10;
    }
    return result;
}
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,q;
        cin>>n>>q;
        ll arr[n];
        set<int> s;
        for(ll i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]>9) s.insert(i);
        }
        while(q--){
            ll query;
            cin>>query;
            if(query==1){
                ll l,r;
                cin>>l>>r;
                r--;
                l--;
                int idx=l;
                while(!s.empty()){
                    auto it=s.lower_bound(idx);
                    if(it==s.end()||*it>r) break;
                    arr[*it]=digit_sum(arr[*it]);
                    int check=*it;
                    s.erase(it);
                    if(arr[check]>9) s.insert(check);
                    idx=check+1;
                }
            }
            else{
                ll x;
                cin>>x;
                cout<<arr[x-1]<<endl;
            }
        }
    }
    return 0;
}