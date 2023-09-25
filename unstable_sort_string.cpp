#include<bits/stdc++.h>
using namespace std;
using ll=long long;
#define f(a,b) for(int i=a;i<b;i++)
int main(){
    ll n,k;
    cin>>n>>k;
    ll p[n];
    ll q[n];
    f(0,n){
        cin>>p[i];
        p[i]--;
    }
    f(0,n){
        cin>>q[i];
        q[i]--;
    }
    set<ll> set1,set2;
    vector<ll> idx;
    for(ll i=0;i<n;i++){
        if(set2.count(p[i])){
            set2.erase(p[i]);
        }
        else{
            set1.insert(p[i]);
        }
        if(set1.count(q[i])){
            set1.erase(q[i]);
        }
        else{
            set2.insert(q[i]);
        }
        if(set1.empty() && set2.empty()){
            idx.push_back(i);
        }
    }
    if(idx.size()<k){
        cout<<"No"<<endl;
    }
    else{
        cout<<"Yes"<<endl;
        ll l=0;
        string s(n,' ');
        for(int i=0;i<int(idx.size());i++){
            ll r=idx[i];
            char c='a'+min(i,25);
            for(ll j=l;j<=r;j++){
                s[p[j]]=c;
            }
            l=r+1;
        }
        cout<<s<<endl;
    }
    return 0;
}