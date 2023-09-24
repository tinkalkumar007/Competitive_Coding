#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int arr[n];
    unordered_map<int,int> mp;
    mp[1]=0;mp[2]=0;mp[3]=0;mp[4]=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        mp[arr[i]]++;
    }
    int ans=0;
    // merge group 1 and 3
    if(mp[3]>mp[1]){
        ans+=mp[1];
        mp[3]-=mp[1];
        mp[1]-=mp[1];
    }
    else{
        ans+=mp[3];
        mp[1]-=mp[3];
        mp[3]-=mp[3];
    }
    // merge group of 2
    ans+=mp[2]/2;
    mp[2]=mp[2]%2;
    // send group 4
    ans+=mp[4];
    // now remaining memeber
    if(mp[3]>0) ans+=mp[3];
    if(mp[1]>0){
        if(mp[2]>0){
            ans++;
            mp[1]-=2;
            mp[2]--;
        }
        if(mp[1]>0){
            ans+=((mp[1]%4==0)?mp[1]/4:(mp[1]/4)+1);
        }
    }
    if(mp[2]>0){
        ans++;
    }
    cout<<ans<<endl;
    return 0;
}
