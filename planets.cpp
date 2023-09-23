#include <bits/stdc++.h>
using namespace std;
using ll=long long;
ll findNum(vector<ll> &arr,ll key){
    ll l=0;
    ll r=arr.size()-1;
    while(l<=r){
        ll mid=l+(r-l)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]>key){
            r=mid-1;
        }
        else{
            l=mid+1;
        }
    }
    return -1;
}
ll shortestPath(vector<pair<ll,ll>> planets[],vector<ll> timeTravel[],ll n){
    vector<ll> dist(n+1,INT_MAX);
    ll minDist=0;
    ll idx=findNum(timeTravel[1],minDist);
    while(idx!=-1 && idx<timeTravel[1].size() && timeTravel[1][idx]==minDist){
        minDist++;
        idx++;
    }
    dist[1]=minDist;
    priority_queue<pair<ll,ll>> pq;
    pq.push({-minDist,1});
    while(!pq.empty()){
        auto temp=pq.top();
        pq.pop();
        if(temp.second==n) return dist[n];
        for(auto it:planets[temp.second]){
            ll cnt=it.second-temp.first;
            if(it.first!=n){
                ll findIdx=findNum(timeTravel[it.first],cnt);
                while(findIdx!=-1 && findIdx<timeTravel[it.first].size() && timeTravel[it.first][findIdx]==cnt){
                    cnt++;
                    findIdx++;
                }
            }
            if(dist[it.first]==INT_MAX||dist[it.first]>cnt){
                dist[it.first]=cnt;
                pq.push({-cnt,it.first});
            }
        }
    }
    return dist[n]==INT_MAX ? -1:dist[n];
}
int main() {
    ll n,m,a,b,c,k,t;
    cin>>n>>m;
    vector<pair<ll,ll>> planets[n+1];
    vector<ll> timeTravel[n+1];
    for(int i=0;i<m;i++){
        cin>>a>>b>>c;
        planets[a].push_back({b,c});
        planets[b].push_back({a,c});
    }
    for(int i=1;i<=n;i++){
        cin>>k;
        for(int j=0;j<k;j++){
            cin>>t;
            timeTravel[i].push_back(t);
        }
    }
    cout<<shortestPath(planets,timeTravel,n)<<endl;
    return 0;
}
