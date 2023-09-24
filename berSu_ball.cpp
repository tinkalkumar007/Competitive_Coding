#include<bits/stdc++.h>
using namespace std;
int ans=0;
vector<int> vis(101,0);
void solve(vector<int> &arr,unordered_map<int,vector<int>> adj,int i,int count){
    if(i>=arr.size()){
        ans=max(ans,count);
        return;
    }
    
    for(auto it:adj[arr[i]]){
        if(!vis[arr[i]]){
            vis[arr[i]]=true;
            solve(arr,adj,i+1,count+1);
            vis[arr[i]]=false;
        }
    }
    if(i<arr.size()-1) solve(arr,adj,i+1,count);
    return;
}
int main(){
    int n,m;
    cin>>n;
    int arr1[n];
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    cin>>m;
    int arr2[m];
    for(int i=0;i<m;i++){
        cin>>arr2[i];
        //vis[arr2[i]]++;
    }
    unordered_map<int,vector<int>> adj;
    vector<int> arr;
    for(int i=0;i<n;i++){
        arr.push_back(arr1[i]);
        for(int j=0;j<m;j++){
            if((arr1[i]+1==arr2[j])||(arr1[i]-1==arr2[j])||(arr1[i]==arr2[j])){
                adj[arr1[i]].push_back(arr2[j]);
            }
        }
    }
    solve(arr,adj,0,0);
    cout<<ans<<endl;
    return 0;
}