#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        priority_queue<pair<long long,long long>> pq1;
        priority_queue<pair<long long,long long>> pq2;
        int i=0;
        while(n--){
            long long a,b;
            cin>>a>>b;
            pq1.push({a,i});
            pq2.push({b,i});
            i++;
        }
        long long ans=INT_MAX;
        while(!pq1.empty() && !pq2.empty()){
            auto it1=pq1.top();
            auto it2=pq2.top();
            if(it1.second!=it2.second){
                ans=min(abs(it1.first-it2.first),ans);
            }
            if(it1.first>it2.first){
                pq1.pop();
            }
            else{
                pq2.pop();
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}